// Hari

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> res;
        
        for(int i = 0; i<nums.size(); i++) {
            umap[nums[i]] = i;
        }
        
        for(int i = 0; i<nums.size(); i++) {
            if (umap.find(target - nums[i]) != umap.end() &&
                umap[target - nums[i]] != i) {
                res.push_back(i);
                res.push_back(umap[target - nums[i]]);
                break;
            }
        }
        
        return res;
    }
