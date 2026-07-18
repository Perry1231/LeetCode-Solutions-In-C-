class Solution {
public:
    bool isPalindrome(string s) {
        string news;
        int size_s = s.size();
        int size=0;
        while(size < size_s){
        if ((s[size] >= 65 && s[size] <= 90) || 
                (s[size] >= 97 && s[size] <= 122) || 
                (s[size] >= 48 && s[size] <= 57)) {
                

                if (s[size] >= 65 && s[size] <= 90) {
                    news += (s[size] + 32);
                } else {
                    news += s[size];
                }
            }
            size++;
        }
        
        int start_n = 0;
        int end_n = news.size()-1;
        while (start_n < end_n) {
        if (news[start_n] != news[end_n]) {
        return false;
        }
        start_n++;
        end_n--;
        }
        return true;
    }
};