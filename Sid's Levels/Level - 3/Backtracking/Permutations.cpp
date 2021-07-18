class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void permuteHelper(vector<int> &nums, int l, int r, vector<vector<int>> &s)
    {
        if(l == r)
        {
            s.push_back(nums);
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
        int n = nums.size();
        permuteHelper(nums, 0, n-1, res);
        sort(res.begin(), res.end());
        return res;
    }
};
