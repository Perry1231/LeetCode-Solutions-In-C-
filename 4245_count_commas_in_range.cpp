class Solution {
public:
    int countCommas(int n) {
        int com=0, num=999;
        if(n<999) return 0;
        else
        {
            while(num != n)
            {
                num++;
                com++;
            }
        }
        return com;
    }
};