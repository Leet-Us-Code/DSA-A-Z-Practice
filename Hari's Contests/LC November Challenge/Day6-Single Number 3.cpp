// Hari

vector<int> singleNumber(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        unordered_map<int,int> umap;
        vector<int> res;
        
        for(auto &it: nums) umap[it] += 1;
        for(auto it: umap){
            if(it.second == 1) res.push_back(it.first);
        }
        return res;
    }
