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
    ListNode* partition(ListNode* head, int x) {
        ListNode *l1 = new ListNode(0);
        ListNode *l2 = new ListNode(0);
        ListNode *s1 = l1;
        ListNode *s2 = l2;
        ListNode *ptr1 = head;
        while(ptr1 != NULL)
        {
            if(ptr1->val < x)
            {
                s1->next = new ListNode(ptr1->val);
                s1 = s1->next;
            }
            else
            {
                s2->next = new ListNode(ptr1->val);
                s2 = s2->next;
            }
            ptr1 = ptr1->next;
        }
        s2->next = NULL;
        s1->next = l2->next;
        return l1->next;
    }
};
