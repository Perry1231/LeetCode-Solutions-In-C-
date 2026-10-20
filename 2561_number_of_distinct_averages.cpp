class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int fis=0, las =nums.size()-1;


        std::unordered_set<float> distinct_avgs;
        while(fis < las)
        {
            float avg = (nums[fis] + nums[las])/2.0;
            distinct_avgs.insert(avg);
            fis++;
            las--;
        }

       return distinct_avgs.size();
    }
};