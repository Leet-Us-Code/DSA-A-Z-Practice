class Solution {
public:
    void subsets(vector<int> nums, set<vector<int>> &s, int i, vector<int> r)
    {
        if(i == nums.size())
        {
            sort(r.begin(), r.end());
            s.insert(r);
            return;
        }
        else
        {
            subsets(nums, s, i+1, r);
            r.push_back(nums[i]);
            subsets(nums, s, i+1, r);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        set<vector<int>> s;
        vector<int> r;
        subsets(nums, s, 0, r);
        vector<vector<int>> res;
        for(auto it = s.begin(); it != s.end(); it++)
            res.push_back(*it);
        return res;
    }
};
