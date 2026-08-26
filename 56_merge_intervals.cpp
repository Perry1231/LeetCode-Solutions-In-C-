class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        int right=1, left=0;

        res.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++)
        {
            if(res.back()[right] >= intervals[i][left]){
            res.back()[right] = max(res.back()[right], intervals[i][right]);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};