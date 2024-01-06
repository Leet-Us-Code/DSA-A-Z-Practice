// Hari

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // Pick Non Pick approach 
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> curr; 
        help(candidates, target, 0, res, curr);

        return res; 
    }

private:
    void help(vector<int>& candidates, int target, int idx, vector<vector<int>>& res, vector<int>& curr) {
        // base
        if (target == 0) {
            res.push_back(curr);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            // Skip duplicates at the same level of recursion
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }

            if (target - candidates[i] >= 0) {
                // Pick i-th element 
                curr.push_back(candidates[i]);
                help(candidates, target - candidates[i], i + 1, res, curr);
                // Backtrack
                curr.pop_back(); 
            } else {
                // Cannot pick as the current element is greater than what we need to reach the target
                break; // Stop the loop as all subsequent elements will be greater
            }
        }
    }
};
