// Hari

ListNode* removeNthFromEnd(ListNode* head, int n) {
        // fast
        ios_base::sync_with_stdio(false);
        // dummy head
        ListNode* start = new ListNode(); start->next = head;
        ListNode* fast = start; ListNode* slow = start;
        
        // move fast ptr n times
        for(int i = 1; i<=n; i++){
            fast = fast->next;
        }
        
        while(fast->next != nullptr){ 
            // if fast already at last node, this block is skipped
            fast = fast->next;
            slow = slow->next;
        }
        
        // now nth node from end is the next node of slow
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        
        return start->next;
    }
