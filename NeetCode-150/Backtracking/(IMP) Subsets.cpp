// Hari

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res; 
        vector<int> curr;
        helper(nums, 0, curr, res);
        return res; 
    }

    void helper(vector<int>& nums, int idx, vector<int>& curr, vector<vector<int>>& res) {
        // base
        if (idx >= nums.size()) {
            // we have a valid curr arr 
            res.push_back(curr);
            return; 
        }

        // left subtree - choose nums[idx] element
        curr.push_back(nums[idx]);
        helper(nums, idx + 1, curr, res);

        // right subtree - not choose nums[idx] element 
        curr.pop_back(); 
        helper(nums, idx + 1, curr, res);
    }
};
