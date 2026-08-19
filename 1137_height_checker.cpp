class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res=0;
        vector <int> heights2 = heights;

        std::sort(heights.begin(), heights.end());
        for(int i=0; i<heights2.size(); i++)
        {
            if(heights2[i] != heights[i]) res++;
        }
        return res;
    }
};