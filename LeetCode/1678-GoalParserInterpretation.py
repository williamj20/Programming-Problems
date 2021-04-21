# Accepted: 12/31/20
# Runtime: 8ms (faster than 99.64%)

class Solution(object):
    def interpret(self, command):
        """
        :type command: str
        :rtype: str
        """
        command = command.replace('()', 'o').replace('(al)', 'al')
        return command
