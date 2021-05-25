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
    void deleteNode(ListNode* node) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //JAI SHRI RAM 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *cur = node;
        ListNode *prev = NULL;
        while(cur->next != NULL)
        {
            cur->val = cur->next->val;
            prev = cur;
            cur = cur->next;
        }
        prev->next = NULL;
    }
};
