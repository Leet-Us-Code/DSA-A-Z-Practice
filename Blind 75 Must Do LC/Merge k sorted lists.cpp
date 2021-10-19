// Hari

ListNode* mergeKLists(vector<ListNode*>& lists) {
        // fast
        ios_base::sync_with_stdio(false);
        // min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i<lists.size(); i++){
            ListNode* curr = lists[i];
            while(curr != nullptr){
                pq.push(curr->val);
                curr = curr->next;
            }
        }
        
        ListNode* res = new ListNode(0);
        ListNode* head = res;
        while(!pq.empty()){
            int currVal = pq.top(); pq.pop();
            res->next = new ListNode(currVal);
            res = res->next;
        }
        
        return head->next;
    }
