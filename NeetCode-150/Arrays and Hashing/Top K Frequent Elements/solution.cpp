// Hari

vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> umap;
        
        for(int i = 0; i<nums.size(); i++){
            umap[nums[i]] += 1;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto it = umap.begin(); it != umap.end(); it++){
            pq.emplace(make_pair(it->second, it->first));
        }
        
        // pop k elements from pq
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
                
            k--;
        }
        
        return res;
    }
