class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size() == 0) return t[0];
        else 
        {
            std::sort(s.begin(), s.end());
            std::sort(t.begin(), t.end());

            for(int i=0; i<t.size(); i++)
            {
                if(t[i] != s[i])
                {
                    return t[i];
                }
            }
        }
        return '0';
    }
};