class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int min=0;
        int max=0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0) min++;
            if(nums[i] >0) max++; 
        }
        if(max >= min) return max;
        else return min;
    }
};