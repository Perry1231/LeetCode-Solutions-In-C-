class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        std::sort(arr.begin(), arr.end());

        vector<int> v1;
        for(int i=0; i<3001; i++)
        { 
                v1.push_back(i);                         //Forming vector of all possible integers
        }

        int i=0, num=0;
        while(i < arr.size())
        {   
            num = arr[i];
            auto it = std::find(v1.begin(), v1.end(), num);
            v1.erase(it); 
            i++;
        }                                                 //Finding existing number and erasing them

        int res = v1[k];
        return res;
    }
};