class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *cur = head;
        while(cur != NULL && cur->next != NULL)
        {
            while(cur->next != NULL && cur->val == cur->next->val)
            {
                ListNode *temp = cur->next->next;
                cur->next = temp;
            }
            cur = cur->next;
        }
        return head;
    }
};
