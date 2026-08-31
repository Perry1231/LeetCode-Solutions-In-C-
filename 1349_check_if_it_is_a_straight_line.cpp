class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        std::sort(coordinates.begin(), coordinates.end());
        
        int dx = coordinates[1][0] - coordinates[0][0];
        int dy = coordinates[1][1] - coordinates[0][1];

        for(int i=2; i< coordinates.size(); i++)
        {
        int curr_dx = coordinates[i][0] - coordinates[i-1][0];
        int curr_dy = coordinates[i][1] - coordinates[i-1][1];
            
         if (dy * curr_dx != dx * curr_dy) {
                return false;
            }
        }
    
    return true;
    }
};