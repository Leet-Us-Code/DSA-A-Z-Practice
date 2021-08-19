// Hari

// Method - 1 (Recursive)
void helper(vector<int> &nums, vector<vector<int>> &res, vector<int> &currPerm, vector<bool> &vis){
        if(currPerm.size() == nums.size()){ // current permutation is done
            res.push_back(currPerm);
            return;
        }
        
        for(int i = 0; i<nums.size(); i++){
            if(!vis[i]){
                vis[i] = true;
                currPerm.push_back(nums[i]);
                helper(nums, res, currPerm, vis);               
                // backtrack
                currPerm.pop_back();
                vis[i] = false;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int N = nums.size();
        vector<bool> vis(N, false);
        vector<int> currPerm;
        helper(nums, res, currPerm, vis);
        return res;
    }

// Method - 2 (Using STL defined function - next_permutation to find permutations) -> slightly slower

vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        res.push_back(nums);
        
        while(next_permutation(nums.begin(), nums.end())){
            res.push_back(nums);
        }
        return res;
    }
