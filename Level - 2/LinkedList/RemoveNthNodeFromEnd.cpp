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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)
            return NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *ptr = head;
        while( n--)
        {
            fast = fast->next;
        }
        if(fast == NULL)
        {
            return slow->next;
        }
        ListNode *prev = NULL;
        while(fast != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = slow->next;
        return ptr;
    }
};
