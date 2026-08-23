class Solution {
public:
    int arrangeCoins(int n) {
        int rows=0, res;
    while(true)
    {
        
        rows++;
        n -= rows;
    if(n < 0)
    {
        return rows -1;
    }
    }
    return rows;
    }
};