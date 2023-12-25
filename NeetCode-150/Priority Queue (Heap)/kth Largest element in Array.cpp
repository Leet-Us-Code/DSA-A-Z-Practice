// Hari

// TODO: Add Quick select approach




// Simple solution using heap
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        priority_queue<int> pq; // max heap
        int res = 0;

        for(auto it: nums) pq.push(it);

        while(k-- > 0) {
            res = pq.top();
            pq.pop();
        }

        return res; 
    }
};
