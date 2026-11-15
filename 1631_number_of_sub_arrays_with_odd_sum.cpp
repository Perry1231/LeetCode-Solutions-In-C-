class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long res = 0;
        int oddCount = 0;
        int evenCount = 1; // Empty prefix sum (0) is even
        int prefixSum = 0;

        for (int num : arr) {
            prefixSum += num;

            if (prefixSum % 2 != 0) {
                res = (res + evenCount) % MOD;
                oddCount++;
            } else {
                res = (res + oddCount) % MOD;
                evenCount++;
            }
        }

        return res;
    }
};