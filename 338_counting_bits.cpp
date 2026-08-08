class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sum(n + 1); 

        for (int i = 0; i <= n; i++) {
            int count = 0;  
            int temp = i;  
            
            while (temp > 0) {
                if (temp % 2 == 1) {
                    count += 1;
                }
                temp /= 2; 
            }    
            sum[i] = count; 
        }
        
        return sum;
    }
};