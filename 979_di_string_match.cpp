class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector <int> res;
        int max= n;
        int min=0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'I')
            {
                res.push_back(min);
                min++;
            }
            else 
            {
                res.push_back(max);
                max--;
            }
        }

        res.push_back(max);
        return res;
    }
};