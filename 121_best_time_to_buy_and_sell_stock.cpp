class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int min_el1=0;
        
        int price=0;      //answer

        for(int i=0; i<prices.size(); i++) //Searching for min price and max income
        {
            if(prices[i] < min) 
            { min= prices[i];  
            min_el1 = i;
            }
            if(prices[i]- min >= price) price = prices[i] - min;
        }
        return price;
    }
};