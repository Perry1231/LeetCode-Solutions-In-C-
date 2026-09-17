class Solution {
public:
    int countElements(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int totalSum=0;
        for(int i=1; i <nums.size()-1; i++)
        {


       if (i - 1 >= 0 && nums[i] > nums[0] && nums[i] < nums[nums.size()-1]) {
                totalSum ++;
            }
        }
        
        return totalSum;
    }
};