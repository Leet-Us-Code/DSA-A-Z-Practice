// Hari

// This is the standard template for Recursion + Backtracking problems
    
    void helper(vector<int>& nums, vector<int>& curr, vector<vector<int>>& res, int j){ // dfs
        res.push_back(curr);
        for(int i = j; i<nums.size(); i++){
            curr.push_back(nums[i]);
            helper(nums, curr, res, i+1); // dfs
            curr.pop_back(); // backtrack
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        helper(nums, curr, res, 0);
        return res;
    }
