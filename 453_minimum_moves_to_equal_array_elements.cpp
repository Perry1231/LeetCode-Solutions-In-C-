class Solution {
public:
    int minMoves(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int min = nums[0];
        int steps =0;
        for(int i=0; i<nums.size(); i++)
        {
           steps +=( nums[i] - min);
        }

        return steps;
    }
};