class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            ans.push_back(nums[i]);
        for(int i = 0; i < n; i++)
            ans.push_back(nums[i]);
        return ans;
    }
};
