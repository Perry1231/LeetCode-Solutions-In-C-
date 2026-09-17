class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        bool isFound=true;
        int res=0;
        std::sort(nums.begin(), nums.end());
        while(isFound)
        {
        if (std::binary_search(nums.begin(), nums.end(), original)) {
        isFound= true;
         original= 2* original;
        }
         else {
        return original;
        }
        }
        return original;
    }
};