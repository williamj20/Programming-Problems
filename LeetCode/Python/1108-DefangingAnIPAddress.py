# Accepted: 01/06/21
# Runtime: 8ms (faster than 99.66%)

class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        return address.replace(".", "[.]")
