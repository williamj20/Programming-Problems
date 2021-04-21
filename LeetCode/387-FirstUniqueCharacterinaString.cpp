// Accepted: 12/27/20
// Runtime: 148ms (faster than 18.83%)

class Solution {
public:
    int firstUniqChar(string s) {
        int index = -1;
        map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]] += 1;
        }
        for (int j = 0; j < s.length(); j++) {
            if (m[s[j]] == 1) {
                index = j;
                break;
            }
        }
        return index;
    }
};