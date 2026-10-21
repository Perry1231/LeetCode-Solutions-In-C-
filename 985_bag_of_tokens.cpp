class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if (tokens.empty()) return 0;

        std::sort(tokens.begin(), tokens.end());

        int left = 0, right = tokens.size() - 1;
        int score = 0;
        int max_score = 0;

        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left];
                left++;
                score++;
                max_score = std::max(max_score, score);
            }
            else if (score > 0) {
                power += tokens[right];
                right--;
                score--; 
            }
            else {
                break;
            }
        }

        return max_score;
    }
};