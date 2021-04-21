// Accepted: 12/27/20
// Runtime: 4ms (faster than 97.91%)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) {
            return false;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};