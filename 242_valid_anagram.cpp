class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        else 
        {
            vector<int> v1;
            vector<int> v2;
            int size = s.size();
            for(char letter : s)
            {
                v1.push_back(letter);
            }
             for(char letter : t)
            {
                v2.push_back(letter);
            }
            
            std::sort(v1.begin(), v1.end());
            std::sort(v2.begin(), v2.end());
            if(v1 != v2) return false;


        }
        return true;
    }
};