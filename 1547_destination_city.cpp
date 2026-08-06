class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int count =0;
        int size = paths.size();

        for(int i=0; i<size; i++)
        {
            bool found =false;
            for(int j=0; j<size; j++)
            {
            if(paths[j][0] == paths[i][1])
            {
                count =i;
            found=true;
            break;
            }
            else 
            {
                continue;
            }
            }
            if(found == false) 
            {
                return paths[i][1]; 
            }
        }
        return paths[count][1];
    }
};