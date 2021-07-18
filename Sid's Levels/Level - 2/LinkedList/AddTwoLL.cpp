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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *ptr = new ListNode(0);
        ListNode *l3 = ptr;
        int carry = 0, sum = 0;
        while(l1 != NULL && l2 != NULL)
        {
            sum = (l1->val + l2->val + carry);
            l3->next = new ListNode(sum%10);
            carry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;
        }
        while(l1 != NULL)
        {
            sum = (l1->val + carry);
            l3->next = new ListNode(sum%10);
            carry = sum/10;
            l1 = l1->next;
            l3 = l3->next;
        }
        while(l2 != NULL)
        {
            sum = (l2->val + carry);
            l3->next = new ListNode(sum%10);
            carry = sum/10;
            l2 = l2->next;
            l3 = l3->next;
        }
        if(carry)
            l3->next = new ListNode(carry);
        return ptr->next;
    }
        
        
};
