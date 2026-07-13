class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=0;
        int index = s.length()-1;
        if(s.empty()) return 0;
        else {
            while (index >= 0 && s[index] == ' ') index--;
            while (index >= 0 && s[index] != ' ') 
            {
                index--;
                size++; 
            }
        
        return size;
        }
    }
};