class Solution {
public:
    int convertTime(string current, string correct) {
        int time1 = std::stoi(current.substr(0, 2)) * 60 + std::stoi(current.substr(3, 2));
        int time2 = std::stoi(correct.substr(0, 2)) * 60 + std::stoi(correct.substr(3, 2));
        int res=0;
        int temp = time1;

        while(temp != time2)
        {
            if(temp + 60 <= time2) {temp += 60; res++;}
            else if(temp + 15 <= time2) {temp += 15; res++;}
            else if(temp + 5 <= time2) {temp += 5; res++;}
            else if(temp + 1 <= time2) {temp += 1; res++;}
        }

        return res;
    }
};