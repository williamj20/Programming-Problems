# Accepted: 12/29/20
# Runtime: 40ms (faster than 98.28%)

class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        nums.sort()
        num = nums[len(nums) - k]
        return num
