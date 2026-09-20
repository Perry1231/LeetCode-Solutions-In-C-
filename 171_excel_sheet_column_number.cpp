class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;
        long long power = 1; // 26^0, 26^1, 26^2 ...
        
        int i = columnTitle.length() - 1;
        while (i >= 0) {
            int value = columnTitle[i] - 'A' + 1;
            result += value * power;             
            power *= 26;                          
            i--;
        }
        
        return result;
    }
};