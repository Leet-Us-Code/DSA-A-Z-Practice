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
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *l3 = new ListNode(0);
        ListNode *res = l3;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val > l2->val)
            {
                l3->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            else
            {
                l3->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            l3 = l3->next;
        }
        if(l1 != NULL)
            l3->next = l1;
        if(l2 != NULL)
            l3->next = l2;
        return res->next;
    }
};
