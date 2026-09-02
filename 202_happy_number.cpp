class Solution {
public:
    bool isHappy(int n) {
    long long res = 0;
    int start = n;

        while(n != 1)
        {
            if(n==4) return false;
            
            while(n > 0)
            {
            res += (n % 10) *(n % 10);
            n/=10;
            }
            

            if(n == 0) 
            {
                
            n = res; res =0;
            }
        }
        return true;
    }
};