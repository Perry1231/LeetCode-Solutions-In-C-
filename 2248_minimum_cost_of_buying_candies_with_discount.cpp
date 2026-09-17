class Solution {
public:
    int minimumCost(std::vector<int>& cost) {
        // Сортуємо масив за зростанням
        std::sort(cost.begin(), cost.end());
        
        int totalCost = 0;
        int n = cost.size();
        
        for (int i = n - 1; i >= 0; i -= 3) {
            totalCost += cost[i];
                        if (i - 1 >= 0) {
                totalCost += cost[i - 1];
            }
                    }
        
        return totalCost;
    }
};