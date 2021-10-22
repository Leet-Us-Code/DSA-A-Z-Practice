// Hari

void helper(vector<int> &candidates, int target, vector<int> &curr, vector<vector<int>> &res, int idx){
        // base case
        if(idx == candidates.size()){
            if(target == 0) res.push_back(curr); return;
        }
        
        // pick
        if(candidates[idx] <= target){
            // valid
            curr.push_back(candidates[idx]);
            // recursive call
            helper(candidates, target-candidates[idx], curr, res, idx); // same idx can be considered again
            // backtrack
            curr.pop_back();
        }
        
        // non pick
        helper(candidates, target, curr, res, idx + 1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // fast
        ios_base::sync_with_stdio(false);
        // Pick and non Pick method
        vector<vector<int>> res;
        vector<int> curr;
        helper(candidates, target, curr, res, 0);
        return res;
    }
