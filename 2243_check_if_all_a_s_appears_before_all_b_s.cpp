class Solution {
public:
    bool checkString(string s) {
        bool isBAp = false;

        for(int i=0; i< s.size(); i++)
        {
            if(s[i] == 'a' && isBAp == true) return false;
            if(s[i] == 'b') isBAp = true;
        }
        return true;
    }
};