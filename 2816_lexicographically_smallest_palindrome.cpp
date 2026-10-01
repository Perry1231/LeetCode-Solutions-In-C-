class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int fis =0;
        int las = s.size()-1;

        while(las > fis)
        {
            if(s[las] != s[fis])
            {
                char minChar = min(s[fis], s[las]);
                s[fis] = minChar;
                s[las] = minChar;
            }
            las--;
            fis++;
        }
        return s;
    }
};