class Solution {
public:
    vector<int> sumZero(int n) {
        int lowerBound = (n / 2) * -1; // get lower bound (-x)
        int upperBound = (n / 2); // get upper bound (x)
        vector<int> sumZeroArr;
        for (int i = lowerBound; i <= upperBound; i++) { // we append (-x, -x+1, ... , x-1, x) to array, skipping 0 so that they sum to 0
            if (i != 0) {
                sumZeroArr.push_back(i);
            }
        }
        if (n % 2 != 0) { // we only add 0 to array if n is odd
            sumZeroArr.push_back(0);
        }
        return sumZeroArr;
    }
};
