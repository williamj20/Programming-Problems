// Accepted: 12/22/20
// Runtime: 20ms (faster than 43.95%)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.count(target - nums[i])) {
                indices.push_back(m[target - nums[i]]);
                indices.push_back(i);
            }
            else {
                m[nums[i]] = i;
            }
        }
        return indices;
    }
};