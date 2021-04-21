// Accepted: 12/28/20
// Runtime: 24ms (faster than 47.78%)

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        if (s.length() < t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        for (auto element : m) {
            if (element.second) {
                return false;
            }
        }
       /* for (int j = 0; j < t.length(); j++) {
            if (!m.count(t[j])) {
                return false;
            }
            else {
                m[t[j]]--;
            }
            if (m[t[j]] < 0) {
                return false;
            }
        } */
        return true;
    }
};