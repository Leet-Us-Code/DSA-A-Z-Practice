class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAHRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = nums.size();
        map<int, int> freq;
        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        vector<int> res;
        for(auto& it : freq)
        {
            if(it.second > n/3)
                res.push_back(it.first);
        }
        return res;
    }
};
