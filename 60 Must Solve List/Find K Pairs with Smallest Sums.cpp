// Hari

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        // one priority queue (maxHeap) keeps track of smallest k sums and the elements too.
        // maxheap saves us time instead of using minheap as it has only k elements at any point
        priority_queue<pair<int, pair<int, int>>> pq;
        
        for(int i = 0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                int sum = nums1[i] + nums2[j];
                // if heap size < k then add this
                if(pq.size() < k) pq.push({sum, {nums1[i], nums2[j]}});
                else {
                    if(sum < pq.top().first){ // this pair has smaller sum than max sum in heap
                        pq.pop();
                        pq.push({sum, {nums1[i], nums2[j]}});
                    }
                }
            }
        }
        // now we have out k smallest sums. pop and push to result. order doesn't matter
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return res;
    }
};
