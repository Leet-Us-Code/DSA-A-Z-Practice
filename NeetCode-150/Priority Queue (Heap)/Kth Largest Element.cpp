// Hari

// Success

class KthLargest {
public:
// Use minHeap so that it is easy to pop small element when adding bigger ones 

    int heapSize = 0; // we want heap size to be same as k (at max - no. of elements can be < k also)
    priority_queue<int, vector<int>, greater<int>> pq;

    // Constructor
    KthLargest(int k, vector<int>& nums) {
        heapSize = k;
        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        if (pq.empty() || pq.size() < heapSize) pq.push(val);

        // only if no space in heap do we start thinking of deletion 
        // if curr element (to add) is smaller than smallest element of heap - no need to waste time attempting to add it 
        else if (pq.top() < val) {
            pq.pop(); // deletion 
            pq.push(val);
        }

        // Since heap size is always k -> kth smallest element is always top element at any point
        return pq.top(); 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */



// TLE (9 / 10 testcases passed)
class KthLargest {
public:
    int kVal = 0; 
    priority_queue<int> pq; // max heap
    KthLargest(int k, vector<int>& nums) {
        kVal = k;
        for (auto it: nums) pq.push(it);
    }
    
    int add(int val) {
        vector<int> temp; // holds popped elements (used to find kth element) which will be added later
        pq.push(val);

        for (int i = 1; i<kVal; i++) {
            temp.push_back(pq.top());
            pq.pop();
        }

        int res = pq.top();

        for (auto it: temp) pq.push(it);
        temp.clear();
        
        return res; 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
