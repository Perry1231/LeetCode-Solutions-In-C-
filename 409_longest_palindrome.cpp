class Solution {
public:
int longestPalindrome(std::string s) {
    std::unordered_map<char, int> countMap;
        
        for (char c : s) {
            countMap[c]++;
        }
        
        int length = 0;
        bool oddFound = false;
        
        for (auto& pair : countMap) {
            if (pair.second % 2 == 0) {
                length += pair.second;
            } 
            else {
                length += pair.second - 1;
                oddFound = true;
            }
        }

        if (oddFound) {
            length += 1;
        }
        
        return length;
    }
};