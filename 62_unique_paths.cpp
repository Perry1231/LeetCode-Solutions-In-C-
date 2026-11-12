class Solution {
public:
    int uniquePaths(int m, int n) {
        int total_steps = m + n - 2;
        int down_steps = min(m - 1, n - 1); 
        long long res = 1;
        
        for (int i = 1; i <= down_steps; ++i) {
            res = res * (total_steps - down_steps + i) / i;
        }
        
        return (int)res;
    }
};