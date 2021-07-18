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
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool helper(ListNode **ptr1, ListNode *ptr2)
    {
        if(ptr2 == NULL || *ptr1 == NULL)
            return true;
        else
        {
            bool rem = helper(&(*ptr1), ptr2->next);
            if(rem == true)
            {
                if((*ptr1)->val == ptr2->val)
                {
                    (*ptr1) = (*ptr1)->next;
                    return true;
                }
                else
                    return false;
            }
            else
                return false;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode *ptr1 = head;
        ListNode *ptr2 = head;
        return helper(&ptr1, ptr2);
    }
};
