// Hari

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // fast
        ios_base::sync_with_stdio(false);
        int carryOver = 0;
        ListNode* res = new ListNode(0); // dummy head
        ListNode *resPtr = res;

        // both lists have values
        while(l1 && l2) {
            int currVal = l1->val + l2->val + carryOver;
            ListNode* curr = new ListNode(currVal % 10);
            carryOver = currVal / 10; 

            resPtr->next = curr;
            resPtr = resPtr->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        // one of the list has values and other doesn't - use 0 for empty addition 
        while(l1) {
            int currVal = l1->val + carryOver;
            ListNode* curr = new ListNode(currVal % 10);
            carryOver = currVal / 10; 

            resPtr->next = curr;
            resPtr = resPtr->next;
            l1 = l1->next;
        }

        while(l2) {
            int currVal = l2->val + carryOver;
            ListNode* curr = new ListNode(currVal % 10);
            carryOver = currVal / 10; 

            resPtr->next = curr;
            resPtr = resPtr->next;
            l2 = l2->next;
        }

        // both list Ptr have reached nullptr but carryOver is not zero
        if (!l1 && !l2 && carryOver != 0) {
            ListNode* curr = new ListNode(carryOver);
            resPtr->next = curr;
            resPtr = resPtr->next;
        }
        
        // End
        resPtr->next = nullptr;

        return res->next;
    }
