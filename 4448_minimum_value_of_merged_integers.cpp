class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int> take;
        for(int i=0; i<nums.size(); i+=2)
        {
            string merged_str = to_string(nums[i]) + to_string(nums[i+1]);
take.push_back(stoi(merged_str)); 
        }
    
        auto res = std::min_element(take.begin(), take.end());
        return *res;
    }
};