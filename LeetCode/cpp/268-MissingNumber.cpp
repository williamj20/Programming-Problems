// Accepted: 12/28/20
// Runtime: 32ms (faster than 84.52%)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (nums.size()*(nums.size() + 1))/2;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum - nums[i];
        }
        return sum;
    }
};