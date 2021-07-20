// Hari

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // take nums[i] and subtract it from target. if result is there in has then return indices
        // else add this number. We do this as we are guaranteed that exactly one valid answer exists.
        
        // hashmap with number and its index
        unordered_map<int, int> umap;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            auto it = umap.find(target - nums[i]);
            if(it != umap.end()){ // "it" exists in umap
                res.push_back(i);
                res.push_back(it->second);
            }
            umap[nums[i]] = i;
        }
        return res;
    }
};
