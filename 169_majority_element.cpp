class Solution {
public:
    int majorityElement(vector<int>& nums) {
        

    std::unordered_map<int, int> frequency;
    for (int x : nums) {
        frequency[x]++;
    }                       //For fruquency

    
    auto most_frequent = std::max_element(
        frequency.begin(), frequency.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second; 

        }                   //For max element
    );
    return most_frequent->first;
}
};