class Solution {
public:
    bool isPerfectSquare(int num) {
        long long res=0, nums=0;
        while(res <= num)
        {
            nums++;
            if(res== num)
            {
                return true;
            }
            else if (res > num)
            {
                return false;
            }
            else res = nums * nums;
        }
        return false;
    }
};