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
    void reorderHelper(ListNode **head, ListNode **left, ListNode *right, int chance, int size)
    {
        if(right == NULL)
            return;
        reorderHelper(&(*head), &(*left), right->next, chance+1, size);
        if(chance > size/2)
        {
            ListNode *temp = (*left)->next;
            (*left)->next = right;
            right->next = temp;
            (*left) = temp;
        }
        if(chance == size/2)
        {
            right->next = NULL;
        }
    }
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return;
        ListNode *left = head, *right = head;
        int size = getSize(head);
        int chance = 0;
        reorderHelper(&head, &left, right, chance, size);
    }
};
