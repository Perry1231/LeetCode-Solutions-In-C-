#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> counts;
        
        for (int num : nums) {
            counts[num]++;
        }

        std::vector<int> res;
        int threshold = nums.size() / 3;

        for (const auto& [num, count] : counts) {
            if (count > threshold) {
                res.push_back(num);
            }
        }

        return res;
    }
};