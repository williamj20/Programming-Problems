// Accepted: 12/22/20

class Solution {
public:
    int reverse(int x) {
        bool negative = x < 0;
        int reversed = 0;
        if (x <= INT_MIN) { // checks for overflow
            return 0;
        }
        if (negative) {
            x *= -1;
        }
        while (x >= 1) {
            if (reversed > INT_MAX / 10) { // checks for overflow
                return 0;
            } else {
                reversed = reversed * 10 + (x % 10);
                x /= 10;
            }
        }
        if (negative) {
            reversed *= -1;
        }
        return reversed;
    }
};
