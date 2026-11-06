class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        auto calc = [](const vector<int>& a1, const vector<int>& t1, const vector<int>& a2, const vector<int>& t2) {
            int min_end = INT_MAX;
            for (size_t i = 0; i < a1.size(); ++i) {
                min_end = min(min_end, a1[i] + t1[i]);
            }
            
            int min_total = INT_MAX;
            for (size_t i = 0; i < a2.size(); ++i) {
                int finish = max(a2[i], min_end) + t2[i];
                min_total = min(min_total, finish);
            }
            return min_total;
        };
        
        int ans1 = calc(landStartTime, landDuration, waterStartTime, waterDuration);
        int ans2 = calc(waterStartTime, waterDuration, landStartTime, landDuration);
        
        return min(ans1, ans2);
    }
};