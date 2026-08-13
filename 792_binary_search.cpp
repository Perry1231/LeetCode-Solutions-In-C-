class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool found = false;
         int mid = nums[nums.size()/2];
        int right =nums.size()-1 , left= 0;
        while(left <= right)                    //Search engine
        {
            mid = (left +right) /2;
            if(target > nums[mid])
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
            if (nums[mid] == target) {
            return mid; 
            }
        }
        return -1;
    }
};