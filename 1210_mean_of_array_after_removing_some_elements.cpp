class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int perc = n / 20; 
    
        std::sort(arr.begin(), arr.end());
        
        double sum = 0;
        for(int i = perc; i < n - perc; i++) {
            sum += arr[i];
        }
        
        return sum / (n - 2 * perc); 
    }
};