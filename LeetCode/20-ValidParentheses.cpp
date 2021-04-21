// Accepted: 12/23/20
// Runtime: 4ms (faster than 17.18%)
// This solution utilizes the vector structure like a Stack

class Solution {
public:
    bool isValid(string s) {
        vector<char> brackets;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                brackets.insert(brackets.begin(), s[i]);
            }
            else if ((s[i] == ')') || (s[i] == ']') || (s[i] == '}')) {
                if (brackets.empty()) {
                    return false;
                }
                else if (((s[i] == ')') && brackets[0] == '(') ||
                         ((s[i] == ']') && brackets[0] == '[') ||
                         ((s[i] == '}') && brackets[0] == '{')) {
                    brackets.erase(brackets.begin());
                }
                else {
                    return false;
                }
            }
        }
    return brackets.empty();
    }
};