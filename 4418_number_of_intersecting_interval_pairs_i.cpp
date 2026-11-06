class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
     int n = intervals.size();
        vector<int> starts(n), ends(n);
        
        for (int i = 0; i < n; ++i) {
            starts[i] = intervals[i][0];
            ends[i] = intervals[i][1];
        }
        
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        
        int total_pairs = n * (n - 1) / 2;
        int disjoint_pairs = 0;
        int i = 0;
        
        for (int start : starts) {
            while (i < n && ends[i] < start) {
                i++;
            }
            disjoint_pairs += i;
        }
        
        return total_pairs - disjoint_pairs;
    }
};