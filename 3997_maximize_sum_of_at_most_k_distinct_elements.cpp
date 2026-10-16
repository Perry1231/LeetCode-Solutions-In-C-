class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        std::sort(nums.rbegin(), nums.rend());
        std::vector<int> res;

        std::vector<std::pair<int, int>> counts; 
        for (int num : nums) {
            if (counts.empty() || counts.back().first != num) {
                counts.push_back({num, 1});
            } else {
                counts.back().second++;
            }
        }

        int count = 0, i = 0;
        while (count < k && i < counts.size()) {
            res.push_back(counts[i].first);
            count++;
            i++;
        }

        return res;
    }
};