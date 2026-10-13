class Solution {
public:
    int smallestRepunitDivByK(int k) {
                    int cs =1;
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        else
        {
           int remainder = 0;
        
        
        for (int length = 1; length <= k; ++length) {
            remainder = (remainder * 10 + 1) % k;
            
            if (remainder == 0) {
                return length;
            }
        }
        }
        return -1;
    }
};