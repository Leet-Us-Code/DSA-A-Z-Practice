// Hari

int findPairs(vector<int>& nums, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        if(k < 0) return 0;
        unordered_map<int, int> umap;
        for(auto it: nums) umap[it]++; // element and frequency
        
        int ans = 0;
        if(k != 0){
            for(auto it: umap){
                if(umap.find(it.first + k) != umap.end()) ans += 1;
            }
            
        } else {
            // for k = 0 just add to ans as per how many elements have > 1 freq
            for(auto it: umap){
                if(it.second > 1) ans += 1;
            }
        }
        
        return ans;
        
    }
