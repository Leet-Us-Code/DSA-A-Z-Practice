class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ind = 0, n = nums.size();
        vector<int> res;
        int l = 0, r = n-1;
        while(l <= r)
        {
            if(ind%2 == 0)
            {
                res.push_back(nums[l++]);
                ind++;
            }
            else
            {
                res.push_back(nums[r--]);
                ind++;
            }
        }
        return res;
    }
};
