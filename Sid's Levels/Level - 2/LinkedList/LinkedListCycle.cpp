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
    bool hasCycle(ListNode *head) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        ListNode *fast = head;
        ListNode *slow = head;
        while(slow != NULL && fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            //check after changing both of them as initially both are the same
            if(slow == fast)
                return true;
        }
        return false;
    }
};
