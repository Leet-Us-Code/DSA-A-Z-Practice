// Hari

ListNode* removeNthFromEnd(ListNode* head, int n) {
        // fast
        ios_base::sync_with_stdio(false);

        // Dummy 
        ListNode* dummy = new ListNode();
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = head;

        for(int i = 0; i<n; i++) {
            if (fast) fast = fast->next;
        }
        // fast is now at target node

        // n + 1 gap always maintained btw slow and fast. 
        // We do n + 1 instead of n so that slow will be at node prev to target node 
        // instead of being on target node itself (cannot access target->prev to change links)
        while(fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // Fast is outside (NULL) and slow is in prev node of target
        ListNode* target = slow->next;
        slow->next = slow->next->next;
        delete target;

        return dummy->next;
    }
