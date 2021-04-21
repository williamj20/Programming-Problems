# Accepted: 01/07/21
# Runtime: 52ms (faster than 68.53%)

class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        temp_nums = nums[:]
        nums.sort()
        lst = []
        for i in temp_nums:
            lst.append(nums.index(i))
        return lst
