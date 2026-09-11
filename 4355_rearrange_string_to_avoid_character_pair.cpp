class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string res = "";
        int count =0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != y) res.push_back(s[i]);
            else count++;
        }

        return string(count, y) + res;
    }
};