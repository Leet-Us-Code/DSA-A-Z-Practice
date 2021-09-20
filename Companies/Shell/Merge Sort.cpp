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
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        if(l1 == NULL && l2 == NULL)
            return NULL;
        ListNode *res = new ListNode(0);
        ListNode *result = res;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val > l2->val)
            {
                res->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            else
            {
                res->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            res = res->next;
        }
        while(l1)
        {
            res->next = new ListNode(l1->val);
            res = res->next;
            l1 = l1->next;
        }
        while(l2)
        {
            res->next = new ListNode(l2->val);
            res = res->next;
            l2 = l2->next;
        }
        return result->next;
    }
    void split(ListNode *head, ListNode* &a, ListNode* &b)
    {
        if(head == NULL || head->next == NULL)
            return;
        ListNode *slow = head, *fast = head->next;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        a = head;
        b = slow->next;
        slow->next = NULL;
    }
    void mergeSort(ListNode* &head)
    {
        if(head == NULL || head->next == NULL)
            return;
        ListNode *a, *b;
        split(head, a, b);
        mergeSort(a);
        mergeSort(b);
        head = merge(a, b);
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        mergeSort(head);
        return head;
    }
};
