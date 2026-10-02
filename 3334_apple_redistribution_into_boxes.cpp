class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum =0;
        int sum_2 = 0;
        int count=0;
        int point=0;

        std::sort(capacity.rbegin(), capacity.rend());

        for (int i = 0; i < apple.size(); i++) {
            sum += apple[i];
        }

        while(point < capacity.size())
        {       
            if (sum_2 < sum) {
                sum_2 += capacity[point];
                point++;
                count++;
            } else {
                return count;
            }
        }

        return count;
    }
};