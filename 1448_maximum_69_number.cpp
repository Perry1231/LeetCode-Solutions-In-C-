class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        
        for (char &ch : s) {
            if (ch == '6') {
                ch = '9';
                break; // Міняємо тільки першу цифру 6 зліва
            }
        }
        
        return stoi(s);
    }
};