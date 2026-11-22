class Solution {
public:
    bool areNumbersAscending(string s) {
        int currentNumber = 0;
        int prevNumber = 0;
        bool inNumber = false;

        for (char c : s) {
            if (std::isdigit(static_cast<unsigned char>(c))) {
                currentNumber = currentNumber * 10 + (c - '0');
                inNumber = true;
            } else {
                if (inNumber) {
                    if (currentNumber <= prevNumber) {
                        return false;
                    }
                    prevNumber = currentNumber;
                    currentNumber = 0;
                    inNumber = false;
                }
            }
        }

        if (inNumber && currentNumber <= prevNumber) {
            return false;
        }

        return true;
    }
};