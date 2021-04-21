// Accepted: 12/22/20
// Runtime: 12ms (faster than 55.25%)
// This solution of the problem uses integer to string conversion

class Solution {
public:
    bool isPalindrome(int x) {
        string num = std::to_string(x);
        reverse(num.begin(), num.end());
        return std::to_string(x) == num;
    }
};