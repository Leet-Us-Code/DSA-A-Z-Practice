// Hari

 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // fast
        ios_base::sync_with_stdio(false);
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* start = new ListNode(0);
        ListNode* head = start;
        
        while(ptr1 != nullptr && ptr2 != nullptr){
            if(ptr1->val < ptr2->val){
                head->next = new ListNode(ptr1->val);
                head = head->next;
                ptr1 = ptr1->next;
            } else {
                head->next = new ListNode(ptr2->val);
                head = head->next;
                ptr2 = ptr2->next;
            }
        }
        
        while(ptr1 != nullptr){
            head->next = new ListNode(ptr1->val);
            head = head->next;
            ptr1 = ptr1->next;
        }
        while(ptr2 != nullptr){
            head->next = new ListNode(ptr2->val);
            head = head->next;
            ptr2 = ptr2->next;
        }
        
        return start->next;
    }
