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
    int getSize(ListNode *head)
    {
        int size = 0;
        while(head != NULL)
        {
            size++;
            head = head->next;
        }
        return size;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL)
            return head;
        int size = getSize(head);
        if(k > size)
            return head;
        int cntr = 0;
        ListNode *ptr = head, *prev = NULL;
        while(ptr != NULL && cntr < k)
        {
            cntr++;
            ListNode *temp = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = temp;
        }
        if(cntr != k)
            head->next = ptr;
        else
            head->next = reverseKGroup(ptr, k);
        return prev;
    }
};
