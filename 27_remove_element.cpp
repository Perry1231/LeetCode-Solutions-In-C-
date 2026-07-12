class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      if (nums.empty()) return 0;
        auto new_end = std::remove(nums.begin(), nums.end(), val);
return std::distance(nums.begin(), new_end);    }
};