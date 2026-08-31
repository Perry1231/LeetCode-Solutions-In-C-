class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rows;
     for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                } else {
                    break; 
                }
            }
            rows.push_back({count, i});
        }

        std::sort(rows.begin(), rows.end());

        vector<int> res;
        for(int i=0 ; i<k; i++)
        {
           res.push_back(rows[i].second); 
        }
        return res;
    }
};