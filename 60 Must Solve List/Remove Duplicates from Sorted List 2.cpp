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
    ListNode* deleteDuplicates(ListNode* head) {
        // base case
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while(curr && curr->next){
            // when there is duplicate
            if(curr->val == curr->next->val){
                int duplicateV = curr->val;
                while(curr != nullptr && curr->val == duplicateV){
                    // keep traversing the duplicate elements and assign prev->next to curr->next
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                }
            }
            
            else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        // return the first val in LL
        // if(dummy->next == nullptr) return nullptr;
        return dummy->next;        
        
    }
};
