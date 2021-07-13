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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *ptr1 = head, *ptr2 = head;
        int cntr = 0;
        while(ptr2 != NULL && cntr < n)
        {
            ptr2 = ptr2->next;
            cntr++;
        }
        if(ptr2 == NULL)
            return ptr1->next;
        ListNode *prev = NULL;
        while(ptr2 != NULL)
        {
            prev = ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        prev->next = ptr1->next;
        return head;
    }
};
