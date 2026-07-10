class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
        auto new_end = std::unique(nums.begin(), nums.end());
        return std::distance(nums.begin(), new_end);
    }
};