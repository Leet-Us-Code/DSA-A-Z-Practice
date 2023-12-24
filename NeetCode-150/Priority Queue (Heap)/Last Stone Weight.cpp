// Hari

int lastStoneWeight(vector<int>& stones) {
        // fast
        ios_base::sync_with_stdio(false);

        // build a max heap
        priority_queue<int> pq;
        for(auto it: stones) pq.push(it);

        while (pq.size() > 1) {
            int s1 = pq.top(); pq.pop();
            int s2 = pq.top(); pq.pop();

            // smash them 
            if (s1 == s2) {
                // do nothing. both stones are gone
            } else if (s1 < s2) {
                int s3 = s2 - s1;
                pq.push(s3);
            } else {
                int s3 = s1 - s2;
                pq.push(s3);
            }
        }

        return pq.size() == 1 ? pq.top() : 0; 
    }
