class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        map<int, int> counts;

    for (char c : s) {
            if (c == '0' || c == '1') {
                counts[c]++;
            }
        }


    std::string res;
    for (int i = 0; i < counts['1'] - 1; i++) {
        res.push_back('1');
    }  

    
    for (int i = 0; i < counts['0']; i++) {
        res.push_back('0');
    } 

    res.push_back('1');
    return res;
    }
};