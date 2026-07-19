class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        
        int start_idx = 0;
        int max_len = 1;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                                int min = i;
                int max = j;
                bool is_palindrome = true;
                
                while (min < max) {
                    if (s[min] != s[max]) {
                        is_palindrome = false;
                        break; 
                    }
                    min++;
                    max--;
                }
                
                if (is_palindrome && (j - i + 1) > max_len) {
                    start_idx = i;
                    max_len = j - i + 1;
                }
            }
        }
        return s.substr(start_idx, max_len);
    }
};