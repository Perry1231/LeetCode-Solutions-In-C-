class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        
        for (int i = 0; i < 30; ++i) {
            string power_str = to_string(1 << i);
            sort(power_str.begin(), power_str.end());
            
            if (s == power_str) {
                return true;
            }
        }
        
        return false;
    }
};