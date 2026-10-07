class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        vector <double> res;
        int fis=0;
        int las =nums.size()-1;

        while(fis < las)
        {
            res.push_back((nums[fis] + nums[las]) /2.0);
            fis++;
            las--;
        }

    double min_val = *min_element(res.begin(), res.end());
        return min_val; 
    }
};