class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        res[0] = findFirst(nums, target);
        res[1] = findLast(nums, target);
        if(nums.size() == 0) return res;
        return res;
    }
    private:

    int findFirst(vector<int>& nums, int target)
    {
    int left=0;
    int right = nums.size()-1;
    int mid1=-1;
     while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] >= target) {
           right = mid - 1;
            } 
            else 
            {
                left = mid + 1;
            }
        if (nums[mid] == target) mid1 = mid;
    }
    return mid1;
    }


 int findLast(vector<int>& nums, int target)
    {
int left=0;
int right = nums.size()-1;
int mid1=-1;

 while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] <= target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        if (nums[mid] == target) mid1 = mid;
    }
    
    return mid1;
    }
};