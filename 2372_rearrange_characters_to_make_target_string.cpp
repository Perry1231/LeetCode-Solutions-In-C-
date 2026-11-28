class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        std::sort(s.begin(), s.end());
        std::sort(target.begin(), target.end());

        std::vector<std::pair<char, int>> counts1;
         for (char c : s) {
        bool found = false;

        for (auto& p : counts1) {
            if (p.first == c) {
                p.second++;
                found = true; 
                
                break;
            }
        }
        if (!found) {
                counts1.push_back({c, 1});
                }
        }


        std::vector<std::pair<char, int>> counts2;
         for (char c : target) {
        bool found = false;

        for (auto& p : counts2) {
            if (p.first == c) {
                p.second++; 
                found = true;
                break;
            }
        }
        if (!found) {
                counts2.push_back({c, 1});
                }
        }

        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        while(j < counts2.size() && i < counts1.size())
        if (counts1[i].first < counts2[j].first) {
                i++; 
            } else if (counts1[i].first == counts2[j].first) {
                ans = std::min(ans, counts1[i].second / counts2[j].second);
                i++;
                j++;
            } else {
                return 0;
            }

        if (j < counts2.size()) return 0;

        return ans;



    }
};