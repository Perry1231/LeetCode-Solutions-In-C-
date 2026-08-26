class Solution {
public:                                //Child         //Cookie
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin(), g.end());
std::sort(s.begin(), s.end());

    int child_s = 0, cookie_s = 0;

while (child_s < g.size() && cookie_s < s.size()) {
    if (s[cookie_s] >= g[child_s]) {
        child_s++; 
    }
    cookie_s++; 
}

return child_s;
    }
};