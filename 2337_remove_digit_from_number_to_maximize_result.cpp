#include <string>
#include <algorithm>

class Solution {
public:
    string removeDigit(string number, char digit) {
        string max_result = "";
        
        for (int i = 0; i < number.length(); ++i) {
            if (number[i] == digit) {
                string temp = number.substr(0, i) + number.substr(i + 1);
                
           
                if (max_result == "" || temp > max_result) {
                    max_result = temp;
                }
            }
        }
        
        return max_result;
    }
};