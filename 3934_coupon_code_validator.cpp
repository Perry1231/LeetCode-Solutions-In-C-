class Solution {
private:
    bool isValidCode(const std::string& s) {
        if (s.empty()) return false;
        for (char c : s) {
            if (!std::isalnum(c) && c != '_') {
                return false;
            }
        }
        return true;
    }

    int getBusinessPriority(const std::string& line) {
        if (line == "electronics") return 0;
        if (line == "grocery") return 1;
        if (line == "pharmacy") return 2;
        if (line == "restaurant") return 3;
        return 4; // Невалідний
    }

public:
    std::vector<std::string> validateCoupons(std::vector<std::string>& code, 
                                             std::vector<std::string>& businessLine, 
                                             std::vector<bool>& isActive) {
        int n = code.size();
        std::vector<int> valid_indices;

        for (int i = 0; i < n; ++i) {
            if (!isActive[i]) continue;
            
            int priority = getBusinessPriority(businessLine[i]);
            if (priority == 4) continue; // Невідома категорія

            if (!isValidCode(code[i])) continue; // Невалідні символи або пусто

            valid_indices.push_back(i);
        }

        // Сортуємо за пріоритетом бізнесу, а якщо вони рівні — за лексикографією коду
        std::sort(valid_indices.begin(), valid_indices.end(), [&](int a, int b) {
            int p1 = getBusinessPriority(businessLine[a]);
            int p2 = getBusinessPriority(businessLine[b]);
            if (p1 != p2) {
                return p1 < p2;
            }
            return code[a] < code[b];
        });

        std::vector<std::string> res;
        for (int idx : valid_indices) {
            res.push_back(code[idx]);
        }

        return res;
                                             }
};