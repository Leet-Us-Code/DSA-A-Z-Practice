// Hari

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // Pick - Non Pick Approach
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        vector<int> curr;
        // hash-array to track what elements have been chosen in a subtree 
        vector<int> freq(nums.size(), 0); 
        helper(curr, nums, res, freq);
        return res;
    }

private:
    void helper(vector<int>& curr, vector<int>& nums, vector<vector<int>>& res, vector<int> freq) {
        // base - if curr size == nums size -> we have a valid permutation in curr
        if (curr.size() == nums.size()) {
            res.emplace_back(curr);
            return;
        }

        for(int i = 0; i<nums.size(); i++) {
            if (freq[i] == 0) {
                // can be chosen 
                curr.push_back(nums[i]);
                freq[i] = 1; 
                helper(curr, nums, res, freq);
                // when you come back, remove top of curr and freq map for that element 
                curr.pop_back();
                freq[i] = 0;
            }
        }
    }
};
