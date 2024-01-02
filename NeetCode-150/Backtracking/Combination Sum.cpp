// Hari

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // fast
        // Pick and Non Pick Approach
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        vector<int> curr;
        helper(0, candidates, target, curr, res);
        return res;
    }

    void helper(int currIdx, vector<int>& candidates, int target, vector<int>& curr, vector<vector<int>>& res) {
        // base 
        if (currIdx == candidates.size()) {
            // If target = 0 then the elements in curr arr is a valid ans
            if (target == 0) {
                res.emplace_back(curr);
            }
            return; 
        }

        // If curr element is <= target -> valid element to add to curr arr. 
        if (candidates[currIdx] <= target) {
            // Pick curr element 
            curr.push_back(candidates[currIdx]);

            // Recursive call - we can stay at same currIdx as same no. can be chose again 
            helper(currIdx, candidates, target - candidates[currIdx], curr, res);

            // After we come back to this call in recursion call stack, remove the element we added in above line before moving to right subtree
            curr.pop_back();
        }

        // Not pick curr element 
        helper(currIdx + 1, candidates, target, curr, res);
    }
};
