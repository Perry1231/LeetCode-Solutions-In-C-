class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        int fnum=0, snum=0;
        if(nums.empty()) return 0;
        else if (nums.size() == 2) return (nums[0]-1)*(nums[1]-1);
        else 
        {
            for(int i=0; i<size; i++)
            {
                if(fnum <= nums[i]) snum = fnum , fnum = nums[i];
                else if (nums[i] > snum && nums[i] < fnum) snum = nums[i];
            }
        }
        return  (fnum-1)*(snum-1);
    }
};