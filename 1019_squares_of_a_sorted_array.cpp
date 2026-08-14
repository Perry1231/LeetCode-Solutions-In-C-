class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;

        for(int i=0; i<nums.size(); i++)
        {
            res.push_back(nums[i] * nums[i]);
        }
        std::sort(res.begin(), res.end());
        return res;
    }
};