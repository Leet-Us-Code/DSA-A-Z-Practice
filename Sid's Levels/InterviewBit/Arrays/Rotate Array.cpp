class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; // in case if k > n
        vector<int> res1, res2;
        vector<int> ans;
        int i = 0;
        for(; i < n-k; i++)
            res1.push_back(nums[i]);
        for(; i < n; i++)
            res2.push_back(nums[i]);
        for(int i = 0; i < res2.size(); i++)
            ans.push_back(res2[i]);
        for(int i = 0; i < res1.size(); i++)
            ans.push_back(res1[i]);
        nums = ans;
    }
};
