# Accepted: 01/10/21
# Runtime: 28ms (faster than 43.48%)

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """

        ''' Iterative Solution
        cur_node = head
        prev_node = None
        while cur_node is not None:
            tmp_node = cur_node.next
            cur_node.next = prev_node
            prev_node = cur_node
            cur_node = tmp_node
        return prev_node
        '''

        # Recursive Solution
        if head is None or head.next is None:
            return head
        prev_node = self.reverseList(head.next)
        head.next.next = head
        head.next = None
        return prev_node
