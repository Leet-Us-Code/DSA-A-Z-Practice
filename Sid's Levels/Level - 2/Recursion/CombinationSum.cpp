class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void helper(vector<int> candidates, int target, int i, int sum, set<vector<int>> &res, vector<int> r)
    {
        if(i == candidates.size())
            return;
        if(sum == target)
        {
            res.insert(r);
            return;
        }
        if(sum > target)
            return;
        helper(candidates, target, i+1, sum, res, r);
        r.push_back(candidates[i]);
        helper(candidates, target, i, sum+candidates[i], res, r);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> res;
        vector<int> r;
        sort(candidates.begin(), candidates.end());
        vector<int> candidate;
        for(int i = 0; i < candidates.size(); i++)
        {
            while(i < candidates.size()-1 && candidates[i] == candidates[i+1])
                i++;
            candidate.push_back(candidates[i]);
        }
        helper(candidate, target, 0, 0, res, r);
        vector<vector<int>> result;
        for(auto it = res.begin(); it != res.end(); it++)
        {
            result.push_back(*it);
        }
        return result;
    }
};
