class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        std::vector<std::pair<int, int>> freqVector(freq.begin(), freq.end());

        std::sort(freqVector.begin(), freqVector.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second; 
        });

        std::vector<int> result;
        for (const auto& entry : freqVector) {
            if (entry.second >= 2) {
                result.push_back(entry.first);
            }
        }

        return result;

    }
};