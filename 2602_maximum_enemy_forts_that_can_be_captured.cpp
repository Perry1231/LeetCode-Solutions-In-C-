class Solution {
public:
    int captureForts(vector<int>& forts) {
        int max_forts = 0;
        int j = 0;
        
        for (int i = 0; i < forts.size(); ++i) {
            if (forts[i] != 0) {
                if (forts[i] == -forts[j]) {
                    max_forts = max(max_forts, abs(i - j) - 1);
                }
                j = i; 
            }
        }
        
        return max_forts;
    }
};