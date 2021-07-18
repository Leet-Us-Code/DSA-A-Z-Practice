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
        if(head == nullptr) return head;
        
        ListNode* currNode = head;
        while(currNode && currNode->next){
            ListNode* nextNode = currNode->next; // if next and curr match, then dispose this node
            if(currNode->val == nextNode->val){
                currNode->next = nextNode->next;
                delete nextNode;
            } else {
                currNode = nextNode;
            }
        }
        
        return head;
    }
};
