class Solution {
public:
   int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> seen;
        int max_len = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            while (seen.count(s[right]) > 0) {
                seen.erase(s[left]);
                left++;
            }
            
            seen.insert(s[right]);
            max_len = std::max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};