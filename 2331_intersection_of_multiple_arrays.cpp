class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> count(1001, 0);
        
        // 1. Рахуємо частоту кожного числа
        for (const auto& arr : nums) {
            for (int num : arr) {
                count[num]++;
            }
        }
        
        // 2. Збираємо елементи, які є в кожному масиві
        vector<int> result;
        int n = nums.size();
        for (int i = 1; i <= 1000; ++i) {
            if (count[i] == n) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};