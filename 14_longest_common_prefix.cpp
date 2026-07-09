class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                string sum="";
                int size=0;
        for (int i = 0; i < strs[0].size(); i++) {
            size++;
        }

        if (strs.empty()) return "";

        else if (strs.size() == 1) return strs[0];

        else if(strs.size() == 2)
        {
        for (int i=0; i<size; i++)
        {
            if(strs[0][i] == strs[1][i])
            sum += strs[1][i];
            else break;   
        }
        }

        else 
        {
           for (int i = 0; i < strs[0].size(); i++) 
            {
             char current_char = strs[0][i];
            for(int j=0; j< strs.size(); j++)
            {
                if(strs[0][i] != strs[j][i] || i > strs[j].size())
                {
                return sum;
                }
            }
            sum += current_char;
        }
        }
         return sum;
        
    }
};