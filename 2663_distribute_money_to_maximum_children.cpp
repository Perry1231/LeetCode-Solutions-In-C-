class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children) return -1;

        vector<int> temp(children, 1); 
        money -= children;

        for (int i = 0; i < children; i++) {
            if (money >= 7) {
                temp[i] += 7;
                money -= 7;
            } else {
                break;
            }
        }

       
        if (money > 0) {
            temp.back() += money;
        }

       
        if (temp.back() == 4) {
            if (children == 1) return -1; 
            temp.back() -= 1;
            temp[children - 2] += 1; 
        }

        int res = 0;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == 8) res++;
        }
        return res;
    }
};