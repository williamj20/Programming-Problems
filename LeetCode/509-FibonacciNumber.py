# Accepted: 01/16/21
# Runtime: 8ms (faster than 99.79%)

class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n <= 1:
            return n
        lst = [0, 1]
        for i in range (2, n + 1):
            lst.append(lst[i-1] + lst[i-2])
        return lst[n]
