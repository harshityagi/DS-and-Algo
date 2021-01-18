// Merge sorted Lists
/* Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: l1 = [], l2 = []
Output: []
Example 3:

Input: l1 = [], l2 = [0]
Output: [0]
*/

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
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        while (l1 || l2) {
            if (!l1 || (l2 && l1->val > l2->val)) {
                tail->next = l2;
                tail = l2;
                l2 = l2->next;
            } else {
                tail->next = l1;
                tail = l1;
                l1 = l1->next;
            }
        }
        return head->next;
    }
};