class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    std::sort(items1.begin(), items1.end(), [](const auto& a, const auto& b) {
    return a[0] < b[0];
});

std::sort(items2.begin(), items2.end(), [](const auto& a, const auto& b) {
    return a[0] < b[0];
});

int fis=0, las =0;
vector <vector<int>> res;
while(fis != items1.size() && las != items2.size())
{
    if(items1[fis][0] == items2[las][0])
    {
        int sum = items1[fis][1] + items2[las][1];
        res.push_back({items1[fis][0], sum});
        fis++;
        las++;
    }
    else if(items1[fis][0] < items2[las][0])
    {
        res.push_back({items1[fis][0], items1[fis][1]});
        fis++;
    }
    else {res.push_back({items2[las][0], items2[las][1]}); las++;}

    
}
while (fis < items1.size()) {
            res.push_back({items1[fis][0], items1[fis][1]});
            fis++;
        }

        while (las < items2.size()) {
            res.push_back({items2[las][0], items2[las][1]});
            las++;
        }
return res;
    }
};