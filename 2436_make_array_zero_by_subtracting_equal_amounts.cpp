class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0, max=1;

        while(max > 0)
        {
            int  min=1001;
            max =0;
            for(int i=0; i< nums.size(); i++)               //searching for minimum
        {
            if(nums[i] < min && nums[i] != 0) min = nums[i];
            if(nums[i] > max) {max = nums[i];}
        }
        if(max <= 0) break;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] - min <= 0) { nums[i] =0;}
            else {nums[i] -= min;}
        }
        op++;
        }

        return op;
    }
};