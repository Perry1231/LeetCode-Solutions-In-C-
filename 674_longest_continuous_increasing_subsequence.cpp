class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
    if (nums.empty()) return 0;
    if(nums.size() ==1) return 1;

    int len1=1, len2=1, in=0;

       while(in < nums.size()-1)
       {
        if(nums[in] < nums[in+1]) len1++;
        else len1=1;
       
       if (len1 > len2) {
                len2 = len1;
            }
            in++;
       }
       return len2;
    }
};