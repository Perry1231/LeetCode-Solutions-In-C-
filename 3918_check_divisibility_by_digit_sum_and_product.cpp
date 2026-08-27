class Solution {
public:
    bool checkDivisibility(int n) {

    int sum = 0;
    int pro = 1;       
    int m = n;
    while(n>0)
       {
        sum += (n%10);
        n/=10;
       } 
        n = m;
       while(n>0)
       {
        pro *= (n%10);
        n/=10;
       }
       if(m % (sum + pro) == 0) return true;
       return false;
    }
};