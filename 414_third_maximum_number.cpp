class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max1=LONG_MIN, max2=LONG_MIN; //const of minimum in c++
        long long max3 = LONG_MIN;
        int size = nums.size();
      
        for(int i=0; i<size; i++)
        {
        if(nums[i] > max1) max3=max2, max2=max1, max1 = nums[i];    
        else if(nums[i] > max2 && nums[i] < max1) max3=max2 , max2 = nums[i];
        else if(nums[i] > max3 && nums[i] < max2) max3=nums[i];    
        }
        if (max3 == LONG_MIN) {
            return max1;
        } else {
            return max3;
        }
        
    }
};