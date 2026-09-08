class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector <int> res (num_people, 0);
        int pep =0;
        int cand_i=1;

        while(candies > 0)
        {   
            int give = min(candies, cand_i);

            res[pep] += give;    
            candies -= give;      
            cand_i++;
        pep++;

        if(pep == num_people) pep=0;
        }
        return res;
    }
};