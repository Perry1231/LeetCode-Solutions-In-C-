class Solution {
public:
    string Operator(string s, int k) {
        string reso = "";
        
        for (int i = 0; i < s.length(); i += k) {
            int group_sum = 0;
            
            for (int j = i; j < min((int)s.length(), i + k); ++j) {
                group_sum += s[j] - '0';
            }
            
            reso += to_string(group_sum);
        }
        
        return reso;
    }

    string digitSum(string s, int k) {
        while (s.length() > k) {
            s = Operator(s, k);
        }

        return s;
    }
};