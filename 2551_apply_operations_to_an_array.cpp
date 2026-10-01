class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int fis=0;
        int las =1;

        while(las != nums.size())
        {
            if(nums[fis] == nums[las])
            {
                nums[fis] *=2;
                nums[las] = 0;
            }

            fis++;
            las++;
        }
        std::stable_partition(nums.begin(), nums.end(), [](int n) {
        return n != 0;
    });
        return nums;
    }
};