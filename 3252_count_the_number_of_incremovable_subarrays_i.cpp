class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int res=0;
        for(int i=0; i< nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                bool isIncreasing = true;
                int prev = -1;
                for(int k =0; k<nums.size(); k++)
                {
                    if (k >= i && k <= j) continue;
                    if (nums[k] <= prev) { 
                        isIncreasing = false;
                        break;
                    }
                    prev = nums[k];
                }

                if (isIncreasing) {
                    res++;
                }
                }
        }
        

        return res;
    }
};