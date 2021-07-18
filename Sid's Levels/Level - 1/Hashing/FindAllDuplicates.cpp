class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        map<int, int> freq;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            if(it->second > 1)
                res.push_back(it->first);
        }
        return res;
    }
};
