class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_b=0, ten_b =0;
        for(int i=0; i<bills.size(); i++)
        {
        if(bills[i] == 5)
        {
            five_b++;
        }
        else if (bills[i] == 10 && five_b >=1)
        {
            five_b--;
            ten_b++;
        }
        
        else
        {
            if(ten_b >= 1 && five_b>=1)
            {
                five_b--;
                ten_b--;
            }
            else if(five_b >= 3) 
            {
                five_b -=3;
            }
            
            else return false;
        }
        }
        return true;
    }
};