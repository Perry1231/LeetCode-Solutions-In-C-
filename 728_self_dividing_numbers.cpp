class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        
        for (int i = left; i <= right; i++) {
            int num = i;      
            bool ch = true;
            
            while (num > 0) {
                int temp = num % 10; 
                
                if (temp == 0 || i % temp != 0) {
                    ch = false;
                    break;
                }
                
                num /= 10; 
            }
            
            if (ch) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};