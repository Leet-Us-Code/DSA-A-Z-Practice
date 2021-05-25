class Solution {
public:
    void helper(vector<int> a, int target, vector<vector<int>> &res, vector<int> r, int sum, int i)
    {
        if(sum == target)
            res.push_back(r);
        if(sum > target)
            return;
        for(int j = i; j < a.size(); j++)
        {
            if(j != i && a[j] == a[j-1])
                continue;
            r.push_back(a[j]);
            helper(a, target, res, r, sum+a[j], j+1);
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<vector<int>> res;
        vector<int> r;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, res, r, 0, 0);
        return res;
    }
};
