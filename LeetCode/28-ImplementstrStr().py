# Accepted: 01/12/21
# Runtime: 380ms (faster than 8.67%)

# This solution is fairly brute force, the fastest python solution is to probably use .find()
# KMP algorithm is a nice algorithm for this problem

class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if needle == "":
            return 0
        for i in range(0, len(haystack)):
            if haystack[i:i + len(needle)] == needle:
                return i
        return -1
