// Hari

void helper(vector<int>& candidates, int target, vector<int> &curr, vector<vector<int>> &res, int idx){
        // base case
        if(idx == candidates.size()){
            if(target == 0) res.push_back(curr);
            return;
        }
        // pick
        if(candidates[idx] <= target){
            curr.push_back(candidates[idx]);
            helper(candidates, target-candidates[idx], curr, res, idx); // idx same as curr ele (idx) can be reused
            curr.pop_back(); // backtrack
        }
        
        // not pick
        helper(candidates, target, curr, res, idx+1); 
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // use Pick and Non Pick Method 
        vector<vector<int>> res;
        vector<int> curr;
        helper(candidates, target, curr, res, 0);
        return res;
    }
