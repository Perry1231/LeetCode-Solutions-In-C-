class Solution {
public:
    bool checkPerfectNumber(int num) {
        int res=0;
        for(int i=1; i<num; i++)
        {
            if(num % i == 0) res+=i;
        }
        if(num == res) return true;
        else return false;
    }
};