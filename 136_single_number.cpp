class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.empty()) return 0;
        else if (nums.size()==1) return nums[0];
        else 
        {
            for(int i=0; i<nums.size(); i++)
            {
            int target = nums[i];
            int res=0;
            if (std::count(nums.begin(), nums.end(), target) ==1) {
            return target; 
            }
            }
        }
        return nums[0];
    }
        
    
};