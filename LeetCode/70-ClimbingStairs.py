# Accepted: 01/16/21
# Runtime: 16ms (faster than 73.45%)

class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0 or n == 1:
            return 1
        nums = [1, 1]
        for i in range (2, n + 1):
            nums.append(nums[i-1] + nums[i-2])
        return nums[n]
