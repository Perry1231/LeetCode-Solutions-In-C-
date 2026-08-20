class Solution {
public:
    bool isPowerOfThree(int n) {
        long long num=3;
        if(n <= 0 || n==2) return false;
        if(n == 1) return true;
        while(num < n)
        {
            if(num<n)
            {
                num *=3;
            }
        }
            if (num == n) return true;
            else return false;
        
        return false;
    }
};