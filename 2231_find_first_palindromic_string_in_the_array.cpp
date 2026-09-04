class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int st=0, fi=0;
        bool isPalindrome= true;
       
        for(int i=0; i<words.size(); i++)
        {
            st=0;
            fi=words[i].size()-1;
            isPalindrome= true;
            while(st< fi)
            {
            if(words[i][st] != words[i][fi]) 
            {
                isPalindrome = false;
                    break;
            }
            st++; fi--;
            }

            if (isPalindrome) {
                return words[i];
            }
        }
        return "";
    }
};