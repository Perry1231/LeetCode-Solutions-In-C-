#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string res = "";
        int i = 0;
        int j = 0;

        while (i < word1.length() || j < word2.length()) {
            if (i < word1.length()) {
                res += word1[i];
                i++;
            }
            if (j < word2.length()) {
                res += word2[j];
                j++;
            }
        }

        return res;
    }
};