class Solution {
public:
    int countDigits(int num) {
        int count =0;
        int val=0;
        int origin = num;
        
        while(num>0)
        {
            
            val = num %10;            
            if(origin % val == 0) count++;
            val=0;
            num /=10;
        }
        return count;
    }
};