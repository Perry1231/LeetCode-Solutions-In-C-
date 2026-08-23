class Solution {
public:
    int tribonacci(int n) {
        int num1=0, num2=0,num3=1 ,res=0;
        if(n == 0 || n==1) return n;
        for(int i=0 ;i< n-1; i++)
        {
            res = num1 + num2 + num3;
            num1 = num2;
            num2 = num3;
            num3 =res;
        }
        return res;
    }
};