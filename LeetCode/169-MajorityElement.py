# Accepted: 01/06/21
# Runtime: 136ms (faster than 77.29%)
# This solution uses the Boyer-Moore Majority Vote Algorithm to achieve O(n) time complexity and O(1) space complexity

class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        for i in nums:
            if count == 0:
                majority_element = i
                count += 1
            elif i == majority_element:
                count += 1
            else:
                count -= 1
        return majority_element
