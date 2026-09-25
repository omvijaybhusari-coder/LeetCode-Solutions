class Solution {
public:
    int mySqrt(int x) {
        // Base cases for 0 and 1
        if (x == 0 || x == 1) {
            return x;
        }
        
        int left = 1;
        int right = x;
        int ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2; // Prevents overflow
            
            // Using division (mid <= x / mid) instead of multiplication (mid * mid <= x)
            // strictly avoids integer overflow issues when x is large.
            if (mid <= x / mid) {
                ans = mid;      // mid could be the potential answer
                left = mid + 1; // Try to find a larger integer
            } else {
                right = mid - 1; // mid is too large, search the lower half
            }
        }
        
        return ans;
    }
};