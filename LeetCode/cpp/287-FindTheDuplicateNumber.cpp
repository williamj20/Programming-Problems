// Accepted: 12/27/20
// Runtime: 32ms (faster than 10.17%)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int duplicate;
        for (int i = 0; i < nums.size(); i++) {
            if (!m.count(nums[i])) {
                m[nums[i]] = i;
            }
            else {
                duplicate = nums[i];
                break;
            }
        }
        return duplicate;
    }
};