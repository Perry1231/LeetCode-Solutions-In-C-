class Solution {
public:
    string largestNumber(vector<int>& nums) {
        std::string res;
        vector<string> nums_str;
        for(int i=0; i<nums.size(); i++)
        {
            nums_str.push_back(to_string(nums[i]));
        }

        sort(nums_str.begin(), nums_str.end(), [](const string& a, const string& b) {
        return a + b > b + a;
        
        });

        if (nums_str[0] == "0") {
            return "0";
        }

        for (const string& s : nums_str) {
            res += s;
        }
        return res;
    }
};