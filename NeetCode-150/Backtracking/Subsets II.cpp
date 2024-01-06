// Hari

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // Pick Non Pick Approach
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        vector<int> curr;
        int idx = 0;

        // sort the nums arr so that we can skip same elements for pick-non pick
        sort(nums.begin(), nums.end());
        helper(nums, idx, curr, res);

        return res; 
    }

private:
    void helper(vector<int>& nums, int idx, vector<int>& curr, vector<vector<int>>& res) {
        // base
        if (idx == nums.size()) {
            res.emplace_back(curr);
            return; 
        }

        // Pick curr element and make all subsets that include curr element i.e. nums[idx]
        curr.push_back(nums[idx]);
        helper(nums, idx + 1, curr, res); 
        // remove added element on coming back 
        curr.pop_back(); 

        // Not pick curr element and make all subsets that DONT include curr element i.e. nums[idx]

        // skip over duplicates of nums[idx] also
        while(idx + 1 < nums.size() && nums[idx] == nums[idx + 1]) idx++; 
        helper(nums, idx + 1, curr, res); 
    }
};
