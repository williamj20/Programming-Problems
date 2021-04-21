# Accepted: 01/07/21
# Runtime: 20ms (faster than 92.78%)

class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        bool_list = []
        max_candies = max(candies)
        for i in candies:
            if i + extraCandies >= max_candies:
                bool_list.append(True)
            else:
                bool_list.append(False)
        return bool_list
