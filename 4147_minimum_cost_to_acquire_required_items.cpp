class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long sum = 0;
        
        long long res = std::min((long long)costBoth, (long long)cost1 + cost2);

        long long count_min = std::min(need1, need2);
        long long count_max = std::max(need1, need2);

        sum += count_min * res;

        long long cost_rem;
        if (need1 > need2) {
            cost_rem = std::min((long long)cost1, (long long)costBoth);
        } else {
            cost_rem = std::min((long long)cost2, (long long)costBoth);
        }

        sum += (count_max - count_min) * cost_rem;

        return sum;
    }
};