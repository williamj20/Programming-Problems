// Accepted: 12/30/20
// Runtime: 0ms (faster than 100%)

class Solution {
public:
    string reformatNumber(string number) {
        number.erase(remove(number.begin(), number.end(), ' '), number.end());
        number.erase(remove(number.begin(), number.end(), '-'), number.end());
        int numDigits = number.length();
        int position = 0;
        while (numDigits > 0) {
            if (numDigits > 4) {
                number.insert(position + 3, "-");
                position += 4;
                numDigits -= 3;
            }
            else if (numDigits == 4) {
                number.insert(position + 2, "-");
                position += 3;
                numDigits -= 2;
            }
            else {
                numDigits -= numDigits;
            }
        }
        return number;
    }
};