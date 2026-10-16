class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        // 1. Сортуємо вхідний масив
        std::sort(nums.begin(), nums.end());

        // 2. Перетворюємо на пари {значення, кількість}
        std::vector<std::pair<int, int>> counts;
        for (int num : nums) {
            if (counts.empty() || counts.back().first != num) {
                counts.push_back({num, 1});
            } else {
                counts.back().second++;
            }
        }

        std::vector<int> res;
        res.reserve(nums.size());
        bool has_elements = true;
        while (has_elements) {
            has_elements = false;
            for (auto& p : counts) {
                if (p.second > 0) {
                    res.push_back(p.first);
                    p.second--;
                    has_elements = true;
                }
            }
        }

        return res;
    }
};