// Accepted: 12/27/20
// Runtime: 32ms (faster than 10.17%)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set <int> s;
        int duplicate;
        for (int i = 0; i < nums.size(); i++) {
            if (!s.count(nums[i])) {
                s.insert(s.begin(), nums[i]);
            }
            else {
                duplicate = nums[i];
                break;
            }
        }
        return duplicate;
    }
};