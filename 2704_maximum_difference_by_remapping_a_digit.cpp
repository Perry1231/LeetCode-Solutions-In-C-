class Solution {
public:
    int minMaxDifference(int num) {
        string max_s = to_string(num);
        string min_s = max_s;

       
        for (char c : max_s) {
            if (c != '9') {
                replace(max_s.begin(), max_s.end(), c, '9');
                break;
            }
        }

        char first_digit = min_s[0];
        replace(min_s.begin(), min_s.end(), first_digit, '0');

        return stoi(max_s) - stoi(min_s);
    }
};