class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;

        std::sort(hand.begin(), hand.end());

        std::vector<bool> used(hand.size(), false);

        for (int i = 0; i < hand.size(); ++i) {
            if (used[i]) continue; 
            int current = hand[i];
            used[i] = true;
            int count_in_group = 1;

            
            int next_val = current + 1;
            
            for (int g = 1; g < groupSize; ++g) {
                bool found = false;
                for (int j = i + 1; j < hand.size(); ++j) {
                    if (!used[j] && hand[j] == next_val) {
                        used[j] = true;
                        found = true;
                        next_val++; 
                        break;
                    }
                }
                if (!found) return false;
            }
        }





        return true;
    }
};