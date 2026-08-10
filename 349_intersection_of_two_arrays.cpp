class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> sum;
        std::sort(nums1.begin(), nums1.end());              //Sorting 2 vectors
        std::sort(nums2.begin(), nums2.end());

        int size1 = nums1.size();
        int size2 = nums2.size();

        for(int i=0; i < size1; i++)                        //Making answer (without unique)
        {
            for(int j=0; j< size2; j++)
            {
                if(nums1[i] == nums2[j]) sum.push_back(nums1[i]);
            }
        }

        std::sort(sum.begin(), sum.end());
        for(int i=sum.size()-1; i>0; i--)
        {
            if(sum[i] == sum[i-1] && i>0) sum.erase(sum.begin() + i);

        }
        return sum;     //Answering
    }
};