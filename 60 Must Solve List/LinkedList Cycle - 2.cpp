// Hari

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
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){ // cycle there
                slow = head;
                while(fast != slow){
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow; // or fast also works
            }
        }
        return nullptr; // no cycle
    }
};
