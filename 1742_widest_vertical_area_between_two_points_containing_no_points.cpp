class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector <int> xs;

        for (const auto& p : points) {
            xs.push_back(p[0]);
        }

        int max_width = 0;
        std::sort(xs.begin(), xs.end());
        for (size_t i = 1; i < xs.size(); ++i) {
            int width = xs[i] - xs[i - 1];
            max_width = max(max_width, width);
        }
        
        return max_width;
    }
};