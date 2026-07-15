class Solution {
public:
    int mySqrt(int number) {
        if (number < 0) return -1;
    if (number == 0 || number == 1) return number;

    int low = 1, high = number, result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2; //num

       
        if (mid <= number / mid) {
            low = mid + 1;
            result = mid; // for -1 or +1 when double mid > 0.5 / <0.5
        } else {
            high = mid - 1;
        }
    }
    return result;
}
};