class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());    
        int n = piles.size() / 3; 
        
        int sum = 0;
        int point = piles.size() - 2; 
        while (point >= n) {
            sum += piles[point];
            point -= 2;
        }
        
        return sum;
    }
};