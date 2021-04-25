// Uses binary search to find the first and last occurrences of target element in the sorted array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid;
        vector<int> indices;
        while (r >= l) { // find first occurrence
            mid = l + (r - l) / 2;
            if (nums[mid] == target && (mid == 0 || nums[mid-1] != target)) { // as soon as we find target we break
                indices.push_back(mid);
                break;
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else { // r = mid - 1 to check the first half of array since we want the first occurrence
                r = mid - 1;
            }
        }
        if (indices.empty()) { // if we could not find a first occurrence, then there are no occurrences so we return
            indices.push_back(-1);
            indices.push_back(-1);
        }
        else { // find second occurrence
            r = nums.size() - 1;
            while (r >= l) {
                mid = l + (r - l) / 2;
                if (nums[mid] == target && (mid == nums.size()-1 || nums[mid+1] != target)) { // as soon as we find target we break
                    indices.push_back(mid);
                    break;
                }
                else if (nums[mid] > target) {
                    r = mid - 1;
                }
                else { // l = mid + 1 to check second half of array since we want the last occurrence
                    l = mid + 1;
                }
            }
        }
        return indices;
    }
};
