class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
      string res = "";


      for (const string& w : words) {
            res += w;        
            if (res == s) return true;  
            if (res.size() > s.size()) return false;
        }
        
        return false;
    }
};