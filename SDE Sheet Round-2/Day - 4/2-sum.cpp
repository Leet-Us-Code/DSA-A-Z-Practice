// Hari

 vector<int> twoSum(vector<int>& nums, int target) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<int> res;
        unordered_map<int, int> umap; // number and index
        
        for(int i = 0; i<nums.size(); i++){
            auto it = umap.find(target - nums[i]);
            if(it != umap.end()){ 
                // valid pair
                res.push_back(i);
                res.push_back(it->second);
            } else {
                umap[nums[i]] = i;
            }
        }
        
        return res;
    }
