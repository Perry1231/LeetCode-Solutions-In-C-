class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        std::sort(nums.begin(), nums.end());

        int in=0;
        for(int i=0; i<nums.size() && k>0; i++)  
        {if(nums[i] < 0) {nums[i] = -nums[i]; k--;}
        }

int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        if (k % 2 != 0) {
            int minVal = *std::min_element(nums.begin(), nums.end());
            totalSum -= 2 * minVal;
        }

        return totalSum;
    }
};