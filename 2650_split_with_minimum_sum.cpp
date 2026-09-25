class Solution {
public:
    int splitNum(int num) {
    std::string nums = std::to_string(num);
    std::sort(nums.begin(), nums.end());
    
    
    std::string num1;
    std::string num2;

    for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0) {
                num1 += nums[i]; 
            } else {
                num2 += nums[i]; 
            }
        }

        int num1_res = std::stoi(num1);
        int num2_res = std::stoi(num2);

        return num1_res + num2_res;
    }
};