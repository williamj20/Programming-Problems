# Accepted: 01/04/21
# Runtime: 104ms (faster than 82.85%)

class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        number = nums[len(nums) - 1]
        i = 0
        while i < len(nums) - 1:
            if nums[i] == nums[i + 1]:
                i += 2
            else:
                number = nums[i]
                break
        return number
