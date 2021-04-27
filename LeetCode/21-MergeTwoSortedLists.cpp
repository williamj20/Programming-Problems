// Time Complexity: O(m + n) - m is length of l1, n is length of l2
// Space Complexity: O(1) - all we do is shift pointers around

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head;
        ListNode* dummyHead = &head;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                dummyHead->next = l1; // set dummyHead->next to point to l1 and move l1 to the next, l2 stays as is
                l1 = l1->next;
            }
            else {
                dummyHead->next = l2; // set dummyHead->next to point to l2 and move l2 to the next, l1 stays as is
                l2 = l2->next;
            }
            dummyHead = dummyHead->next; // move dummyHead to the next
        }
        if (l1 == nullptr) { // if l1 is nullptr just add l2
            dummyHead->next = l2;
        }
        else { // if l2 is nullptr just add l1
            dummyHead->next = l1;
        }
        return head.next; // since we started with a "dummy head", we return head.next
    }
};
