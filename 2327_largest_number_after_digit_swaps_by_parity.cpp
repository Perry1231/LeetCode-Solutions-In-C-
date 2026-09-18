class Solution {
public:
    int largestInteger(int num) {
        std::string s = std::to_string(num);
        std::vector<char> evens, odds;
        for (char c : s) {
            if ((c - '0') % 2 == 0) {
                evens.push_back(c);
            } else {
                odds.push_back(c);
            }
        }

        std::sort(evens.rbegin(), evens.rend());
        std::sort(odds.rbegin(), odds.rend());

        int even_idx = 0, odd_idx = 0;
        for (int i = 0; i < s.length(); ++i) {
            if ((s[i] - '0') % 2 == 0) {
                s[i] = evens[even_idx++];
            } else {
                s[i] = odds[odd_idx++];
            }
        }

        return std::stoi(s);

    }
};