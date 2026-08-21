class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool isN = false;
        if (num < 0)
        {
        num = abs(num);
        isN = true;
        }

        string res = "";
        while(num > 0)
        {
            res += to_string(num % 7);
            num /= 7;
        }
        
        if(isN)
        {
           res += '-'; 
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};