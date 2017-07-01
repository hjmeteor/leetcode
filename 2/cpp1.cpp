/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preHead(0), *p = &preHead;
        int carry = 0;
        while(l1 || l2 || carry){
            int v1 = 0, v2 = 0;
            if (l1){
                v1 = l1->val;
                l1 = l1->next;
            }
            if(l2){
                v2 = l2->val;
                l2 = l2->next;
            }
            int sum = v1 + v2 + carry;
            carry = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
        }
        return preHead.next;
    }
};
