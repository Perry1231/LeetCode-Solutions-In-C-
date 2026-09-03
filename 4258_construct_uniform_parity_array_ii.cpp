class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int min=0;
        std::sort(nums.begin(), nums.end());
       for(int i=0; i<nums.size(); i++)                    //Searching minimum odd to future transformtion
       {
        if(nums[i] % 2 !=0){ min = nums[i]; break;}
       }

    if(min == 0) return true;
    vector<int> res; 

        for(int i=0; i<nums.size(); i++)                    //Trasformation
        {
            if(nums[i] % 2 !=0) res.push_back(nums[i]);
            else 
            {
                res.push_back(nums[i]-min);
            }
        } 

  
        for(int i=0; i<res.size(); i++)
        {
            if(res[i] < 1 || res[i] % 2 ==0) return false;
        }
    
    return true;
    }
};