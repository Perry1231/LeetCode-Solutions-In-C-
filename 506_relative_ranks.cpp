class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res(score.size());
        
        for(int i = 0; i < score.size(); i++) {
            auto it = std::max_element(score.begin(), score.end());
            int index = std::distance(score.begin(), it);
 
            if (i == 0) {
                res[index] = "Gold Medal";
            } else if (i == 1) {
                res[index] = "Silver Medal";
            } else if (i == 2) {
                res[index] = "Bronze Medal";
            } else {
                res[index] = std::to_string(i + 1);
            }
            *it = -1; 
        }
        
        return res;
    }
};