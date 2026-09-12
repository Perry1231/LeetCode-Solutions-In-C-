class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum;
        int fis =0;
        int thi;

        int left=1;                 //For second number
        int right=nums.size()-1;    //For third number

        vector<vector<int>> res;

        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] > 0) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

        while(left < right)
        {   
            sum = nums[i] + nums[left] + nums[right];
            if(sum == 0)
            {
                res.push_back({nums[i], nums[left], nums[right]});

                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--; //Skip dublicate

                left++;
                right--;
            }
            else if(sum > 0) right--;
            else if (sum < 0) left++;
        }
        }
        return res;
    }
};