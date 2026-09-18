class Solution {
public:
    int findMaxK(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int fis =0, last = nums.size()-1;

        while(fis < last)
        {
            if(nums[fis] == (nums[last] * -1)) return nums[last];
            else if (-nums[fis] > nums[last]) {
                fis++;
            } else {
                last--;
            }
        }
        
        return -1;
    }
};