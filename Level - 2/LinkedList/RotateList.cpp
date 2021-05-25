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
        ListNode *ptr = head;
        while(ptr != NULL)
        {
            size++;
            ptr = ptr->next;
        }
        return size;
    }
    ListNode *getAtInd(ListNode *head, int ind)
    {
        int size = getSize(head);
        if(head == NULL)
            return NULL;
        else if(ind > size)
            return NULL;
        else
        {
            ListNode *ptr = head;
            ListNode *prev = NULL;
            int c = 0;
            while(ptr != NULL && c < ind-1)
            {
                c++;
                prev = ptr;
                ptr = ptr->next;
            }
            prev->next = NULL;
            ListNode *cur = ptr;
            while(cur->next != NULL)
            {
                cur = cur->next;
            }
            cur->next = head;
            return ptr;
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int size = getSize(head);
        if(k == 0)
            return head;
        if(size == 0)
            return head;
        k = k%size;
        if(k == 0)
            return head;
        int ind =  size - k + 1;
        return getAtInd(head, ind);
    }
};
