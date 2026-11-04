class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size() <=1) return 0;
        int op=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] <= nums[i - 1])
            {
                int needed = nums[i - 1] + 1;
                op += (needed - nums[i]);
                nums[i] = needed;
               continue;
            }
        }
        return op;
    }
};