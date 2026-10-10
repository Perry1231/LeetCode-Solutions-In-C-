class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector <int> res;
        int maxi= n;
        int mini = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'I')
            {
                res.push_back(mini);
                mini++;
            }
            else 
            {
                res.push_back(maxi);
                maxi--;
            }
        }

        res.push_back(maxi);
        return res;
    }
};