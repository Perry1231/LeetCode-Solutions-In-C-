class Solution {
public:
    int addDigits(int num) {
  
       while(num > 9)
       {
        int nus=0;
        while(num > 0)
        {
        nus += num % 10;
        num /=10;
        }
        num = nus;
       
       }
       return num; 
    }
};