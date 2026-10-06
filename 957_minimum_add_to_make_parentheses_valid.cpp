class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_br =0;
        int clos_br=0;

        for (char c : s) {
            if(c == '(') open_br++;
            else 
            {
                if(open_br >0) open_br--;
                else clos_br++;
            }
        }
        return open_br + clos_br;
    }
};