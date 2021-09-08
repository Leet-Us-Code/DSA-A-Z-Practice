class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void permuteHelper(vector<int> &nums, int l, int r, set<vector<int>> &s)
    {
        if(l == r)
        {
            s.insert(nums);
            return;
        }
        for(int i = l; i <= r; i++)
        {
            swap(nums[i], nums[l]);
            permuteHelper(nums, l+1, r, s);
            swap(nums[i], nums[l]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> s;
        permuteHelper(nums, 0, nums.size()-1, s);
        for(auto it = s.begin(); it != s.end(); it++)
            res.push_back(*it);
        return res;
    }
};
