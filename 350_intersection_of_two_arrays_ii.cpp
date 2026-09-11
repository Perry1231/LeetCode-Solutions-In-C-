class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin() , nums1.end());
        std::sort(nums2.begin() , nums2.end());


        int left=0, right=0;
        std::vector <int> res;
        while(left < nums1.size() && right < nums2.size())
        {
            if(nums1[left] == nums2[right])
             {res.push_back(nums1[left]);left++; right++;}

            else if(nums1[left] > nums2[right]) right++;
            else left++;
        }
        return res;
    }
};