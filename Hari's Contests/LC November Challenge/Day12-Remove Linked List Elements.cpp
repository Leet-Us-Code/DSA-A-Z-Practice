// Hari

ListNode* removeElements(ListNode* head, int val) {
        // fast
        ios_base::sync_with_stdio(false);
        // if head node and/or series of nodes after it also = val, we traverse head 
        // till head points to a node != val
        while(head != nullptr && head->val == val) head = head->next;
        // check
        if(head == nullptr) return head;
        // for other standard cases
        ListNode* temp = head;
        while(temp != nullptr && temp->next != nullptr){
            if(temp->next->val == val){
                ListNode* deleteThis = temp->next;
                temp->next = temp->next->next;
                delete deleteThis;
            } else temp = temp->next;
        }
        
        return head;
    }
