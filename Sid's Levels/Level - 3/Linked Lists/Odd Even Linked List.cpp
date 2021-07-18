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
    ListNode* oddEvenList(ListNode* head) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        ListNode *odd = head, *even = head->next;
        ListNode *oddp = odd, *evenp = even; 
        while(odd != NULL && odd->next != NULL && even != NULL && even->next != NULL)
        {
            ListNode *temp = even->next;
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenp;
        return oddp;
    }
};
