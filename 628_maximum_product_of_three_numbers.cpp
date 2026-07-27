class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int size = nums.size();
      
        sort(nums.begin(), nums.end());
        if (nums[0] * nums[1] * nums[size-1] > nums[size-1] * nums[size-2] * nums[size-3])
        return nums[size-1] * nums[0] * nums[1];
        else return nums[size-1] * nums[size-2] * nums[size-3];
    }
};