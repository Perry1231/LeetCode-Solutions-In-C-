class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();
        if (k == 0) return;
        std::vector <int> k_res;
        std::vector <int> o_res;


        for(int i=0; i< nums.size()-k; i++)
        {
            o_res.push_back(nums[i]);
        }

        for(int i=nums.size()-k; i < nums.size(); i++)
        {
            k_res.push_back(nums[i]);
        }

        nums.clear();
        nums.insert(nums.end(), k_res.begin(), k_res.end());
        nums.insert(nums.end(), o_res.begin(), o_res.end());

    }
};