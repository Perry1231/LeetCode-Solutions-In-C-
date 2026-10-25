class Solution {
public:
    int countBeautifulPairs(std::vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int firstDigit = nums[i];
            while (firstDigit >= 10) {
                firstDigit /= 10;
            }

            for (int j = i + 1; j < nums.size(); j++) {
                int lastDigit = nums[j] % 10;

                if (std::gcd(firstDigit, lastDigit) == 1) {
                    sum++;
                }
            }
        } 
        return sum;
    }
};