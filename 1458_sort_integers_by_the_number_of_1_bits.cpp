class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<pair<int, int>> bitPairs;

        for (int num : arr) {
            int count = __builtin_popcount(num);        //For bits insertr
            bitPairs.push_back({count, num});
        }

        sort(bitPairs.begin(), bitPairs.end());
        
        vector<int> res;
        for (const auto& p : bitPairs) {
            res.push_back(p.second);
        }

        return res;
         
    }
};