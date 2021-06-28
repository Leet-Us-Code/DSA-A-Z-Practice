class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int sum = 0;
        int cntr = 0;
        unordered_map<int, int> mp;
        mp[0]++;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(mp.find(sum - k) != mp.end())
                cntr += mp[sum-k];
            mp[sum]++;
        }
        return cntr;
    }
};
