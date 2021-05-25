class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void permutation(vector<vector<int>> &set, vector<int> num, int l, int r)
    {
        if(l == r)
        {
            set.push_back(num);
        }
        for(int i = l; i <= r; i++)
        {
            swap(num[i], num[l]);
            permutation(set, num, l+1, r);
            swap(num[i], num[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> set;
        int n = nums.size();
        permutation(set, nums, 0, n-1);
        return set;
    }
};
