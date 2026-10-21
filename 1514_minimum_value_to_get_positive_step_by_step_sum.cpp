class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int cur=0;

        for(int i=0; i<nums.size(); i++)
        {
            cur += nums[i];
            sum = std::min(sum, cur);
        }

        return 1- sum;
    }
};