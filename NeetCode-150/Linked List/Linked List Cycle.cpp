// Hari

// Solution - 1
bool hasCycle(ListNode *head) {
        // fast
        ios_base::sync_with_stdio(false);

        // TC - O(n) and SC - O(n) approach
        unordered_set<ListNode*> uset;
        while(head) {
            if (uset.find(head) == uset.end()) {
                uset.insert(head);
            } else {
                // loop exists
                return true;
            }

            head = head->next;
        }

        // head at null. No loop exist
        return false;
    }

// Solution - 2
bool hasCycle(ListNode *head) {
        // fast
        ios_base::sync_with_stdio(false);

        // TC - O(n) and SC - O(1) approach
        // Floyd's Hare and Tortoise

        /**
        Can also do
        ListNode *slow = head, *fast = head;
        and no need of L38
        */
        if (!head || !head->next) return false; 
        ListNode *slow = head, *fast = head->next;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;

            if (slow == fast) return true;
        }

        return false;
    }
