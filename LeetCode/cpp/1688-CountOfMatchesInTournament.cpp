// Accepted: 12/29/20
// Runtime: 0ms (faster than 100%)
// My solution uses recursion just for the sake of using recursion, better solutions can be written using loops or even simply returning n-1

class Solution {
public:
    int numberOfMatches(int n) {
        int numMatches = 0;
        int numTeams;
        if (n == 1) {
            return 0;
        }
        if (n % 2 == 0) {
            numTeams = n / 2;
            n /= 2;
            
        }
        else {
            numTeams = (n - 1) / 2 + 1;
            n = (n - 1) / 2;
            
        }
        numMatches = n + numberOfMatches(numTeams);
        return numMatches;
    }
};