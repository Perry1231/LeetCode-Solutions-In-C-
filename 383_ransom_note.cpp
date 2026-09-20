class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        std::sort(ransomNote.begin(), ransomNote.end());
        std::sort(magazine.begin(), magazine.end());
        int i=0 , j=0;

       while (i < ransomNote.length() && j < magazine.length()) {
            if (ransomNote[i] == magazine[j]) {
                i++;
                j++;
            } else if (magazine[j] < ransomNote[i]) {
                j++;
            } else {
                return false;
            }
        }

        return i == ransomNote.length();
    }
};