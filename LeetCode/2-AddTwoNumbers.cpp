// Accepted: 04/21/21
// Runtime: 24ms (faster than 79.83%)
// Time Complexity: O(max(m,n)) - length of the longer linked list
// Space Complexity: O(max(m,n)) - length of returned linked list is max(m,n) + 1 at most

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp_sum = 0;
        int sum = 0;
        ListNode head; // define the head node
        ListNode* sumList = &head; // define pointer to head node
        while (l1 != nullptr || l2 != nullptr || temp_sum != 0) { // in while loop, we iterate using the pointer to head node
            if (l1 != nullptr) {
                temp_sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                temp_sum += l2->val;
                l2 = l2->next;
            }
            sum = temp_sum % 10;
            if (temp_sum >= 10) {
                temp_sum = 1;
            }
            else {
                temp_sum = 0;
            }
            sumList->next = new ListNode(sum);
            sumList = sumList->next;
        }
        return head.next; // head node is just a "dummy" node, the actual values are inserted at head.next
    }
};
