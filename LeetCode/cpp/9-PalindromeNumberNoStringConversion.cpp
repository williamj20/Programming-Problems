// Accepted: 12/22/20
// Runtime: 24ms (faster than 17.01%)
// This solution of the problem does not use integer to string conversion

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> digits;
        int numDigits = 0;
        int tmp;
        if (x < 0) {
            return false;
        }
        while (x >= 1) {
            tmp = x % 10;
            digits.push_back(tmp);
            x /= 10;
        }
        for (int i = 0; i < ceil(digits.size()/2); i++) {
            if (digits[i] != digits[digits.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};