class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector <vector < int>> temp_1 {{1}};
        if( numRows == 1) return temp_1;
        
        std::vector <vector<int>> res {{1}};
        
        for(int i=1; i<numRows; i++)
        {
            vector <int> temp;
            temp.push_back(1);
            int sum =0;
            
            int left=0 , right=1;
            while(right < res[i-1].size())           //cretaing row  
            {
                int sum = res[i-1][left] + res[i-1][right];
                temp.push_back(sum);
                left++;
                right++;
            }
            temp.push_back(1);
            res.push_back(temp);
           

        }

        return res;
    }
};