class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    vector <int> res = arr;
    vector <int> res2;

        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());

        res2.reserve(arr.size());

        for(int i=0; i<arr.size(); i++)
        {
        auto it = lower_bound(res.begin(), res.end(), arr[i]);
        res2.push_back(distance(res.begin(), it) + 1);
        }
        return res2;
    }
};