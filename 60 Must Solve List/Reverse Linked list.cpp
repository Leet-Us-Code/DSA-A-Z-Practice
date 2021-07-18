// Hari
// 2 methods

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
    ListNode* reverseList(ListNode* head) {
        /* Efficient + LL focused solution
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        head = prev;
        return head;
        */
        
        // Inefficient stack solution - doing as qn is given in Stack section of 60LC List
        stack<int> nodes;
        ListNode* curr = head;
        while(curr){
            nodes.push(curr->val);
            curr = curr->next;
        }
        ListNode* res = new ListNode(0);
        ListNode* dummy = res;
        while(!nodes.empty()){
            int currV = nodes.top(); nodes.pop();
            res->next = new ListNode(currV);
            res = res->next;
        }
        
        return dummy->next;
    }
};

