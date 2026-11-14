class Solution {
public:
    int maxDistance(vector<int>& colors) {
       if(colors.size() == 2) return 1;

       int maxD =0;
       for(int i=0; i<colors.size(); i++)
       {
        for(int j=i; j< colors.size(); j++)
        {
           if (colors[i] != colors[j]) 
            {
                maxD = std::max(maxD, j - i);
            }
        } 
       }
       return maxD;
    }
    
};