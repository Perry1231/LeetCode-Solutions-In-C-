class Solution {
public:
    string largestOddNumber(string num) {
        std::string res = "";
        
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                for (int j = 0; j <= i; j++) {
                    res += num[j];
                }
                return res; 
            }
        }
        
        return res; 
    }
};