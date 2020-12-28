// Accepted: 12/28/20
// Runtime: 12ms (faster than 22.56%)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int count = 0, position = 0; count < nums.size(); count++, position++) {
            if (!nums[position]) {
                nums.erase(nums.begin() + position);
                nums.push_back(0);
                position -= 1;
            }
        }
    }
};