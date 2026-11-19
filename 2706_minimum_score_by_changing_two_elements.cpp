class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int dropTwoLargest  = nums[n - 3] - nums[0];
        int dropTwoSmallest = nums[n - 1] - nums[2];
        int dropBothEnds    = nums[n - 2] - nums[1];
        
        return std::min({dropTwoLargest, dropTwoSmallest, dropBothEnds});
    }
};