class Solution {
public:
    int numOfUnplacedFruits(std::vector<int>& fruits, std::vector<int>& baskets) {
        int n = fruits.size();
    
        std::vector<bool> used(n, false);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
       
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true; 
                    unplaced--;   
                    break;        
                }
            }
        }

        return unplaced;
    }
};