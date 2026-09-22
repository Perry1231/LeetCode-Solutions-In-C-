class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        
        int min_diff = INT_MAX;


        for(int i=0; i<arr.size()-1; ++i)
        {
        int diff = arr[i + 1] - arr[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }


        std::vector<std::vector<int>> res;

        for(int j=0; j<arr.size()-1; ++j)
        {
            if(arr[j + 1] - arr[j] == min_diff)
            {
                res.push_back({arr[j] , arr[j+1]});
            }
        }
        return res;
    }
};