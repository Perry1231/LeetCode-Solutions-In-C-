class Solution {
public:
    long long countCommas(long long n) {
        long long totalCommas = 0;
        long long threshold = 1000; // Перший поріг, де з'являється 1 кома

        while (n >= threshold) {
            // Усі числа від `threshold` до `n` мають щонайменше ще одну додаткову кому
            totalCommas += (n - threshold + 1);
            
            // Переходимо до наступного порогу (10^6, 10^9, 10^12, ...)
            // Використовуємо перевірку на переповнення для long long
            if (threshold > LLONG_MAX / 1000) {
                break;
            }
            threshold *= 1000;
        }

        return totalCommas;
    }
};