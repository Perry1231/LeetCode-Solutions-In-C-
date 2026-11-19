class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        int res = 0;
        std::sort(amount.begin(), amount.end());
        
        while (amount[1] > 0 && amount[2] > 0) {
            amount[1]--;
            amount[2]--;
            res++;
            std::sort(amount.begin(), amount.end()); 
        }
        
        
        res += amount[2];
        
        return res;
    }
};