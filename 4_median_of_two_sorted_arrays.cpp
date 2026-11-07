class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Part 1: merging arrays
        nums1.reserve(nums1.size() + nums2.size());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        //Part 2: sorting
        std::sort(nums1.begin(), nums1.end());


    
        //Part 3: median find
        int n = nums1.size();
    if (n == 0) return 0;
    if (n % 2 != 0) {
        return nums1[n / 2];
    } else {
        return (nums1[(n - 1) / 2] + nums1[n / 2]) / 2.0; 
    }
    }
};