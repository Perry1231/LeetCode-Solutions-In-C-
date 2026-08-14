class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector <int> res;

        for(int i=0; i<arr2.size(); i++)
        {
            for(int j=0; j<arr1.size(); j++)
            {
            if(arr2[i] == arr1[j]) {res.push_back(arr1[j]);}
            }
        }

    vector<int> ost;
    for (int i = 0; i < arr1.size(); i++) {
    if (std::find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end()) {
        ost.push_back(arr1[i]);
        }
    }
    std::sort(ost.begin(), ost.end());

        res.insert(res.end(), ost.begin(), ost.end());
        return res;
    }
};