class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        long long sum=0;

        std::sort(nums.begin(), nums.end());
        for (int count = 0; count < k; count++) {
            sum += nums.back();
            nums.back() += 1;
        }
        return sum;
    }
};