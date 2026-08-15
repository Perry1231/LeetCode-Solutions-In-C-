class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        bool res;
        int fun= arr[1] - arr[0];
        for(int i=0; i< arr.size()-1; i++)
        {
            if(arr[i] + fun == arr[i+1]) res=true;
            else {res = false; break;}
        }
        return res;
    }
};