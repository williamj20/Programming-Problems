// Accepted: 12/23/20
// Runtime: 148ms (faster than 14.45%)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                nums.erase(nums.begin() + (i+1));
                i -= 1;
            }
        }
        return nums.size();
    }
};