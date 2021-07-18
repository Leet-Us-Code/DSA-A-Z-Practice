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
    int getSize(ListNode *head)
    {
        int size = 0;
        ListNode *ptr = head;
        while(ptr != NULL)
        {
            size++;
            ptr = ptr->next;
        }
        return size;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(head == NULL)
            return NULL;
        ListNode *ptr = head;
        ListNode *prev = NULL;
        ListNode *cur = head;
        int c = 0;
        int size = getSize(head);
        if(size >= k)
        {
            while(cur != NULL && c < k)
            {
                ListNode *temp = cur->next;
                cur->next = prev;
                prev = cur;
                cur = temp;
                c++;
            }
            if(cur != NULL)
            ptr->next = reverseKGroup(cur, k);
            return prev;
        }
        else 
        {
            return head;
        }
    }
};
