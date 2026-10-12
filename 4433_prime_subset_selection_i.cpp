class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> res;
        vector<int> temp;
        
        for (int i = 2; i <= n; i++) {
            bool is_prime = true;
            
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    is_prime = false;
                    break;
                }
            }
            
            if (is_prime) {
                temp.push_back(i);
            }
        }

        int sum = 0, i = 0;
        
        while (i < temp.size()) {
            if (sum + temp[i] <= s) {
                sum += temp[i];
                res.push_back(temp[i]);
                i++;
            } else {
                break; 
            }
        }

        return res;
    }
};