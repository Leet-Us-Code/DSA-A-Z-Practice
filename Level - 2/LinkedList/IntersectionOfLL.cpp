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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA = getSize(headA);
        int sizeB = getSize(headB);
        int dif = abs(sizeA - sizeB);
        if(sizeA > sizeB)
        {
            int c = 0;
            while(c < dif)
            {
                c++;
                headA = headA->next;
            }
            while(headA != NULL && headB != NULL)
            {
                if(headA == headB)
                    return headA;
                headA = headA->next;
                headB = headB->next;
            }
            return NULL;
        }
        else
        {
            int c = 0;
            while(c < dif)
            {
                c++;
                headB = headB->next;
            }
            while(headA != NULL && headB != NULL)
            {
                if(headA == headB)
                    return headB;
                headA = headA->next;
                headB = headB->next;
            }
            return NULL;
        }
    }
};
