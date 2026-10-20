class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> count(26, 0);
            for (char c : s) {
            count[c - 'a']++;
        } 

        vector<int> frequencies;
        for (int c : count) {
            if (c > 0) {
                frequencies.push_back(c);
            }
        }

        if (frequencies.size() <= k) {
            return 0;
        }

        std::sort(frequencies.begin(), frequencies.end());

        int deletions = 0;
        int excess = frequencies.size() - k;
        
        for (int i = 0; i < excess; i++) {
            deletions += frequencies[i];
        }

        return deletions;       
    }
};