class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sum="";
        int size=0;
        for (int i = 0; i < strs[0].size(); i++) {
            size++;
        }
        for (int i=0; i<size-1; i++)
        {
            if(strs[0][i] == strs[1][i] &&strs[0][i] == strs[2][i])
            sum += strs[1][i];
            else break;   
        }
 return sum;
    }
};