class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        std::vector<std::pair<int, std::string>> people(n);
        for (int i = 0; i < n; ++i) {
            people[i] = {heights[i], names[i]};
        }


        std::sort(people.begin(), people.end(), [](const auto& a, const auto& b) {
            return a.first > b.first; // Sort for down 
        });

        std::vector<std::string> result(n);
        for (int i = 0; i < n; ++i) {
            result[i] = people[i].second;
        }
        
        return result;

    }
};