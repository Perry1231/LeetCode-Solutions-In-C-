class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n==2) return true;
        vector<int> fib = {0, 1, 1};
        while (true) {
            int next_fib = fib.back() + fib[fib.size() - 2];
            fib.push_back(next_fib);
            
            int sz = fib.size();
            long long current_sum = (long long)fib[sz - 1] + fib[sz - 2] + fib[sz - 3];
            
            if (current_sum == n) return true;
            if (current_sum > n) return false;
        }
    }
};