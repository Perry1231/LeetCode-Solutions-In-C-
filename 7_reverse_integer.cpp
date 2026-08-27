class Solution {
public:
    int reverse(int x) {

        if (x == -2147483648) return 0;

        bool isMin= false;
        if(x < 0) {isMin = true; x *=-1;}

        int y=0;
        int pop =0;
        int int_max = 2147483647;
        int int_min = -2147483647;
    while(x !=0 )
    {   
        pop = x % 10;
        x /= 10;
      
    if (y > (int_max - pop) / 10) return 0;        
        y = y * 10 + pop;
    }
    if(isMin) y *= -1;
    return y;
    }
};