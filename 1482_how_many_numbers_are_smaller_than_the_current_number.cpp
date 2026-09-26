class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> res;
        int temp=0;
        int count=0;

        for(int i=0; i<nums.size(); i++)
        {   
            count =0;
            temp = nums[i];
            for(int j=0; j<nums.size(); j++)
            {
                if(temp > nums[j]) count++;
            }
            res.push_back(count);
        }
        return res;
    }
};