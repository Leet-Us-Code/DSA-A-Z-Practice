// Hari

class Solution {
public:
    // TC is O(kLogN) which is better than NlogK (sliding window + heap has only k elements at any point of time method)
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for(auto it: nums) umap[it]++; // umap has key->number & val->freq
        
        priority_queue<pair<int, int>> pq; // pair(freq, number)
        for(auto it = umap.begin(); it != umap.end(); it++){
            pq.push(make_pair(it->second, it->first));
            // pq is maxheap that keeps the number with maxFrequency at the top 
        }
        
        vector<int> res;
        while(k--){
            auto topVal = pq.top();
            res.push_back(topVal.second); //  -> used only when accessing pointer
            pq.pop();
        }
        
        return res;
    }
};
