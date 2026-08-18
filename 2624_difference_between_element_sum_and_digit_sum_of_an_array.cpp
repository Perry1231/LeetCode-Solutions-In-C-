class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int res, sum1=0, sum2=0;
        int ost;
    for(int i=0; i<nums.size(); i++)
    {
        sum1 += nums[i];
    }
    
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] > 9)
        {
            while(nums[i] > 9)
            {
                ost = nums[i] %10;
                sum2 += ost;
                nums[i] = nums[i]/10;
            }
            sum2 += nums[i];
        } 
        else sum2 += nums[i]; 
    }

    res = sum1 -sum2;
    return res;
    }
};