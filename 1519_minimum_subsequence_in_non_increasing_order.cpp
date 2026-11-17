class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {

        sort(nums.rbegin(), nums.rend());
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int current_sum = 0;
        vector<int> res;
        
        for (int num : nums) {
            current_sum += num;
            res.push_back(num);
            if (current_sum > total_sum - current_sum) {
                break;
            }
        }
        
        return res;
    }
};