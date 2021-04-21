# Accepted: 01/10/21
# Runtime: 56ms (faster than 99.24%)

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        cur_node = head
        vals_lst = []
        while cur_node is not None:
            vals_lst.append(cur_node.val)
            cur_node = cur_node.next
        return vals_lst == vals_lst[::-1]  # Uses slicing to reverse list
