class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int>res;

        int i=0;
        int j=0;
        int k=0;
        bool isG;
       while(i < nums1.size())
       {
        isG= false;
        auto fin = std::find(nums2.begin(), nums2.end(), nums1[i]);
        j = std::distance(nums2.begin(), fin);
        k=j+1;

       while(k < nums2.size())                                //Searching greater elem
       {
        if(nums2[k] > nums2[j]) {res.push_back(nums2[k]); isG=true; break;}
        else k++;
       }

    if(isG == false)
    {
        res.push_back(-1);
    }
        i++;

       } 
       return res;
    }
};