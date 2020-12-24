// Accepted: 12/24/20

class Solution {
    bool isPrime(int n) {
        if ((n == 1) || (n == 0)) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) { // i <= sqrt(n)
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
public:
    int countPrimes(int n) {
        int numPrimes = 0;
        for (int i = 0; i < n; i++) {
            if (isPrime(i)) {
                numPrimes += 1;
            }
        }
        return numPrimes;
    }
};