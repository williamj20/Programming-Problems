// Accepted: 12/29/20
// Runtime: 24ms (faster than 98.59%)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin = 0;
        int end = s.size() - 1;
        while (begin < end) {
            swap(s[begin],s[end]);
            begin++;
            end--;
        }
    }
};