// Hari

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* dummy = res;
        
        int carry = 0;
        while(l1 && l2){
            int curr = l1->val + l2->val + carry;
            ListNode* currNode = new ListNode(curr % 10);
            carry = curr / 10;
            res->next = currNode;
            res = res->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1){
            int curr = l1->val + carry;
            ListNode* currNode = new ListNode(curr % 10);
            carry = curr / 10;
            res->next = currNode;
            res = res->next;
            l1 = l1->next;
        }
        
        while(l2){
            int curr = l2->val + carry;
            ListNode* currNode = new ListNode(curr % 10);
            carry = curr / 10;
            res->next = currNode;
            res = res->next;
            l2 = l2->next;
        }
        
        if(carry){
            res->next = new ListNode(carry);
        }
        
        return dummy->next;
    }
};
