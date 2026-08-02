class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        int size = candies.size();
        vector<bool> res(size);
        for(int i=0; i< size; i++) if(candies[i] >= max) max = candies[i];     //Searching for max candies before adding

        for(int i =0; i<size; i++)          //Add extra candies to search 
        {
            if(candies[i] + extraCandies >=max) 
            {
                res[i] = true;
            } 
            else res[i] = false;
        }

        return res;
    }
};