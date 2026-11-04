#include <vector>
#include <numeric>

class Solution {
public:
    bool canThreePartsEqualSum(std::vector<int>& arr) {
        int total_sum = std::accumulate(arr.begin(), arr.end(), 0);
        
        if (total_sum % 3 != 0) {
            return false;
        }
        
        int target = total_sum / 3;
        int current_sum = 0;
        int found_parts = 0;
        
        for (size_t i = 0; i < arr.size() - 1; ++i) {
            current_sum += arr[i];
            if (current_sum == target) {
                found_parts++;
                current_sum = 0;
                
                if (found_parts == 2) {
                    return true;
                }
            }
        }
        
        return false;
    }
};