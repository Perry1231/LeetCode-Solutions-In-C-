class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> res(n); 



       
        int first_idx = 0;
        while (first_idx < n && s[first_idx] != c) {
            first_idx++;
        }
        for (int i = 0; i <= first_idx && i < n; i++) {
            res[i] = first_idx - i; 
        }






        int fis_char = first_idx;
        int sec_char = first_idx + 1;
        while (sec_char < n) {
            
            while (sec_char < n && s[sec_char] != c) {
                sec_char++;
            }

            if (sec_char < n) {
                for (int i = fis_char + 1; i <= sec_char; i++) {
                    res[i] = min(i - fis_char, sec_char - i);
                }
                fis_char = sec_char; 
            }
            sec_char++;
        }

        for (int i = fis_char + 1; i < n; i++) {
            res[i] = i - fis_char;
        }

        return res;
    }
};