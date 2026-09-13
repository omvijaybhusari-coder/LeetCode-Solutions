class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Sign
        bool negative = (dividend < 0) != (divisor < 0);

        // Positive magnitude ke liye long long
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long quotient = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // divisor ko double karte jao
            while (temp + temp <= a) {
                temp = temp + temp;
                multiple = multiple + multiple;
            }

            // jitna subtract kar sake utna subtract
            a = a - temp;
            quotient = quotient + multiple;
        }

        if (negative) {
            quotient = -quotient;
        }

        return quotient;
    }
};