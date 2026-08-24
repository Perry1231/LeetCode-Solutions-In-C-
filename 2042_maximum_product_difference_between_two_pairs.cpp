class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      int n = nums.size();

        
        std::nth_element(nums.begin(), nums.begin() + 1, nums.end());
        int min1 = nums[0];
        int min2 = nums[1];

       
        std::nth_element(nums.begin() + 2, nums.end() - 2, nums.end());
        int max1 = nums[n - 1];
        int max2 = nums[n - 2];

        return (max1 * max2) - (min1 * min2);
    }
};