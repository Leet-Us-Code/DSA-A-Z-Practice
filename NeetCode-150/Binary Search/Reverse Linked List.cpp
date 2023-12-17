// Hari

// Iterative 

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
        // Iterative solution

        // fast
        ios_base::sync_with_stdio(false);

        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode* next = nullptr;

        while(curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev; // which will be the the head of reversed list
    }
};

// Recursive

ListNode* reverseList(ListNode* head) {
        // Recursive solution

        // fast
        ios_base::sync_with_stdio(false);

        ListNode *prev = nullptr;
        ListNode *curr = head;

        return reverse(curr, prev);
    }

    ListNode* reverse(ListNode* curr, ListNode* prev) {
        ListNode* next = nullptr;

        // base
        if (curr == nullptr) return prev; // head of new reversed list 
        else {
            next = curr->next;
            curr->next = prev;
            return reverse(next, curr);
        }
    }
