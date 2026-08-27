class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int res=0;
    std::sort(coins.begin(), coins.end());
    for(int i=0 i<costs.size(); i++)
{
if(coins - costs[i] >=0) {coins -= costs[i]; res++;}
else break;
}
    return res;
    }
};