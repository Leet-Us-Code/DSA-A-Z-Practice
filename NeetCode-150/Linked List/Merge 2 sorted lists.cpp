// Hari 

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // fast
        ios_base::sync_with_stdio(false);

        // Create new List approach
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* start = new ListNode(0);
        ListNode* head = start;

        while(ptr1 && ptr2) {
            if (ptr1->val <= ptr2->val) {
                head->next = new ListNode(ptr1->val);
                ptr1 = ptr1->next;
            } else {
                head->next = new ListNode(ptr2->val);
                ptr2 = ptr2->next;
            }
            head = head->next;
        }

        while(ptr1) {
            head->next = new ListNode(ptr1->val);
            head = head->next;
            ptr1 = ptr1->next;
        }
        while(ptr2) {
            head->next = new ListNode(ptr2->val);
            head = head->next;
            ptr2 = ptr2->next;
        }

        return start->next;
    }
