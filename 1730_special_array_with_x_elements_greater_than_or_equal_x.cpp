class Solution {
public:
    int specialArray(vector<int>& nums) {   
        int sum=0;
       if(nums.size() == 0) return -1;

       for(int i=0; i<=nums.size(); i++) 
       {
        sum=0;
        for(int j=0; j<nums.size(); j++)
        {
            if(nums[j] >= i) sum++;
        }
        if(sum == i) return sum;
       }
       return -1;
    }
};