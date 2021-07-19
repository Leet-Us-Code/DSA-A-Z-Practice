// Hari

class KthLargest {
public:
    // a minHeap with k elements at all times will show the kth largest element. eg. if 10, 8, 7 is given and k = 3 -> 7 (smallest of the vals) is the 3rd largest element
    
    priority_queue<int, vector<int>, greater<int>> pq; // minHeap
    int heapSize = 0; // global var to check k in add fun
    
    KthLargest(int k, vector<int>& nums) {
        heapSize = k;
        for(int i = 0; i<nums.size(); i++){
            pq.push(nums[i]);
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        if(pq.empty() || pq.size() < heapSize) pq.push(val);
    // if val is < top element of heap then do nothing. If greater, pop the min element and add val 
        else if(val > pq.top()){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
