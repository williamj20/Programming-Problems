// Uses binary search to find the position, since the given array is sorted

class Solution {
public:
    int binarySearchPosition(vector<int>& nums, int target, int l, int r) { // recursive binary search approach
        int mid;
        if (r >= l && r < nums.size()) {
            mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                return binarySearchPosition(nums, target, l, mid-1);
            }
            return binarySearchPosition(nums, target, mid+1, r);
        }
        return l;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearchPosition(nums, target, 0, nums.size()-1);
    }
};
