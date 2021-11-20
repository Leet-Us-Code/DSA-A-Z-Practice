// Hari

int singleNonDuplicate(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        // Method - 1
        /*
        int res = 0;
        for(auto it: nums) res ^= it;
        // a XOR a = 0 -> res will contain the one time occuring element
        return res;
        */
        
        // Method - 2
        unordered_map<int, int> umap;
        for(auto it: nums) umap[it] += 1;
        
        for(auto [num, freq]: umap){
            if(freq == 1) return num;
        }
        return -1;
    }
