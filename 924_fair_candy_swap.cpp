class Solution {
public:
    std::vector<int> fairCandySwap(std::vector<int>& aliceSizes, std::vector<int>& bobSizes) {
        int sumA = std::accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = std::accumulate(bobSizes.begin(), bobSizes.end(), 0);
        
        int diff = (sumB - sumA) / 2;
        
        std::unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());
        
        for (int x : aliceSizes) {
            int targetY = x + diff;
            if (bobSet.count(targetY)) {
                return {x, targetY};
            }
        }
        
        return {};
    }
};