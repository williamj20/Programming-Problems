# Accepted: 01/04/21
# Runtime: 192ms (faster than 90.76%)

class Solution(object):
    def countConsistentStrings(self, allowed, words):
        """
        :type allowed: str
        :type words: List[str]
        :rtype: int
        """
        num_invalid_strings = 0
        for i in words:
            for j in i:
                if j not in allowed:
                    num_invalid_strings += 1
                    break
        return len(words) - num_invalid_strings
