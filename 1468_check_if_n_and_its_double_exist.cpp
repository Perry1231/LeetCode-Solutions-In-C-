class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i) {
            int target = 2 * arr[i];
            
            auto it = lower_bound(arr.begin(), arr.end(), target);
            
            if (it != arr.end() && *it == target) {
                int j = distance(arr.begin(), it);
                if (i != j) {
                    return true;
                }
            }
        }
        return false;
   
    }
};