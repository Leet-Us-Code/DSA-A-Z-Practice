// Hari

vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        unordered_map<int, int> umap;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            auto it = umap.find(target - nums[i]);
            if(it != umap.end()){
                res.push_back(i);
                res.push_back(it->second);
            }
            else umap[nums[i]] = i;
        }
        return res;
    }
