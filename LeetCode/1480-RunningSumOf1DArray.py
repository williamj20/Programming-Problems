# Accepted: 01/08/21
# Runtime: 36ms (faster than 16.93%)

class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sum_list = []
        cur_sum = 0
        for i in nums:
            cur_sum += i
            sum_list.append(cur_sum)
        return sum_list
