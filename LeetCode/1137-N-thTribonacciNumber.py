# Accepted: 01/16/21
# Runtime: 8ms (faster than 99.79%)

class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 2:
            return n
        elif n == 2:
            return 1
        lst = [0, 1, 1]
        for i in range(3, n + 1):
            lst.append(lst[i-3] + lst[i-2] + lst[i-1])
        return lst[n]
