# Accepted: 01/01/21
# Runtime: 40ms (faster than 55.44%)

class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        lst = []
        for i in range(len(accounts)):
            wealth = 0
            for j in (accounts[i]):
                wealth += j
            lst.append(wealth)
        lst.sort()
        return lst[(len(lst) - 1)]
