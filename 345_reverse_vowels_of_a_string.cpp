class Solution {
public:
bool isVowel(char c) {
        return std::string("aeiouAEIOU").find(c) != std::string::npos;
    }

    string reverseVowels(string s) {
        int start =0;
        int end = s.size()-1;

        while(start < end)
        {
           while (start < end && !isVowel(s[start])) {
                start++;
            }
            while (start < end && !isVowel(s[end])) {
                end--;
            }

            if(start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};