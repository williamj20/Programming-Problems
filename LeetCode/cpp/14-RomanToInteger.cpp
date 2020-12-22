// Accepted: 12/22/20

class Solution {
    // converts character s to its roman numeral value
    int romanValue(char s) {
        int value;
        if (s == 'I') {
            value = 1;
        }
        else if (s == 'V') {
            value = 5;
        }
        else if (s == 'X') {
            value = 10;
        }
        else if (s == 'L') {
            value = 50;
        }
        else if (s == 'C') {
            value = 100;
        }
        else if (s == 'D') {
            value = 500;
        }
        else if (s == 'M') {
            value = 1000;
        }
        return value;
    }
    public:
    // primary function
    int romanToInt(string s) {
        int finalInt = 0;
        int current;
        int previous;
        for (int i = 0; i < s.size(); i++) {
            if (i == 0) {
                finalInt += romanValue(s[i]);
            }
            else {
                current = romanValue(s[i]);
                previous = romanValue(s[i-1]);
                if ((current / 5 == previous) || (current / 10 == previous)) {
                    finalInt -= 2*romanValue(s[i-1]);
                }
                finalInt += romanValue(s[i]);
            }
        }
        return finalInt;
    }
};