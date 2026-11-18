class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0.0;
        if(n == 0) return 1.0;
        if(x == 1) return 1.0;
        if(x == -1 && n % 2 == 0) return 1.0;
        if(x == -1 && n % 2 != 0) return -1.0;

        long long binary = n;
        long double base = x;

        if(binary < 0) {
            base = 1.0L / base;
            binary = -binary;
        }

        long double ans = 1.0L;

        while(binary > 0) {
            if(binary % 2 == 1) {
                ans *= base;
            }

            base *= base;
            binary /= 2;
        }

        return (double)ans;
    }
};