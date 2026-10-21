class Solution {
public:
    int minPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector <int> res;
        int left=0, right = nums.size()-1;
        while(left < right)
        {
            int sum = nums[left] + nums[right];
            res.push_back(sum);
            left++;
            right--;
        }

        auto max_it = std::max_element(res.begin(), res.end());
int maxi = *max_it;
return maxi; 
    }
};