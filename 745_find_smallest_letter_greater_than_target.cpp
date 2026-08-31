class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       
       
      auto ub = std::upper_bound(letters.begin(), letters.end(), target);
      return (ub != letters.end()) ? *ub : letters[0];
    }
};