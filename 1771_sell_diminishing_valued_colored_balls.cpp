class Solution {
public:
    int maxProfit(vector<int>& inventory, int orders) {
        int sum=0;

        int blue=inventory[1];
        int yell = inventory[0];
 
        while(orders >0)
        {
            if(blue >= yell && blue > 0) {sum += blue; blue--;orders--;}
            if(yell > blue && yell > 0) {sum += yell; yell--;orders--;}
        }

        return sum;
    }
};