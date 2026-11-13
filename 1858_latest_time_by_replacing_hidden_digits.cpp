class Solution {
public:
    string maximumTime(string time) {
        std::string res = time;
        
        if(time[0] =='?' && time[1] < '4') res[0] = '2';
        else if(time[0]  == '?'&& time[1] == '4' && (res[3] > '0' || res[4] > '0')) res[0] ='1';
        else if(time[0]  == '?'&& time[1] > '4') res[0] ='1';
        else if(time[0]  == '?'&& time[1] == '0') res[0] ='2';
        

        if(time[0] == '?' && time[1]== '?') {res[0] = '2' ; res[1] = '3';}
        else if(time[0] != '?' && time[1] == '?' && time[0] == '1') res[1] = '9';
        else if(time[0] != '?' && time[1] =='?' && time[0] == '2') res[1] = '3';
        else if(time[0] != '?' && time[1] =='?' && time[0] == '0') res[1] = '9';

        if(time[3] == '?') res[3] = '5';
        if(time[4] == '?') res[4] = '9';

        return res;
    }
};