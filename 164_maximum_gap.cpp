class Solution {
public:
    int maximumGap(vector<int>& nums) {
      if(nums.size() <= 1) return 0;

      std::sort(nums.begin(), nums.end());
      int dec=0;

      for(int i=0; i<nums.size()-1; i++)
      {
        if(nums[i+1] - nums[i] >= dec) dec=nums[i+1] - nums[i];
      }  
      return dec;
    }
};