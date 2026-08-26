class Solution {
public:                                //Child         //Cookie
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.rbegin(), g.rend());
        std::sort(s.rbegin(), s.rend());

    int res=0, child_s=0, coockie_s=0;
    while (child_s < g.size() && coockie_s < s.size())    
    {
        if(g[child_s] <= s[coockie_s]) {res++; child_s++; coockie_s++;}
        else child_s++;
    }
    return res;
    }
};