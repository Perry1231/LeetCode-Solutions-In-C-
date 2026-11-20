class Solution {
public:
    int minTimeToType(string word) {
        int total_time = 0;
        char curr = 'a'; 

        for (char target : word) {
            int diff = abs(target - curr);
            
            total_time += min(diff, 26 - diff) + 1;
            curr = target;
        }

        return total_time;
    }
};