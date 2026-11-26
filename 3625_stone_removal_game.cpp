class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        int moves = 0;

        while (n >= stones && stones > 0) {
            n -= stones;
            stones--;
            moves++;
        }

        return moves % 2 == 1;
    }
};