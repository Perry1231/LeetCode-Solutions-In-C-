class Solution {
public:
    int pivotInteger(int n) {
        
        if (n == 1) return 1;
        int total_sum = n * (n + 1)/2 ;

        int x = int(pow (total_sum , 0.5));
        if(x * x == total_sum) return x;
        return -1;
    }
};