class Solution {
public:
    bool detectCapitalUse(string word) {  
        if(word.size() == 1) return true;
        if(islower(word[0]) && isupper(word[1])) return false;
        if(std::isupper(word[1]))
        {
        for(int i=2; i<word.size(); i++)
        {
            if(std::islower(word[i])) return false;
        }
        }

        else if(std::islower(word[1]))
        {
        for(int i=1; i<word.size(); i++)
        {
            if(std::isupper(word[i])) return false;
        }
        }
        return true;
    }
};