#include <bitset>

class Solution {
public:
    int calculateScore(int a, int b) {
        int s1 = std::bitset<8>(a).count();
        int s2 = std::bitset<8>(b).count();

        if (s1 >= s2) {
            return s1 * s2;
        } else {
            if (s1 == 0) return 0;
            return s2 / s1;        
        }
    }
};