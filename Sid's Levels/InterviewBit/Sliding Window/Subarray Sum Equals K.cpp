class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int subarraySum(vector<int>& nums, int k) {
        unordered_set<int> s;
        int n = nums.size();
        vector<int> comb(n+1);
        comb[0] = 0;
        for(int i = 1; i <= n; i++)
            comb[i] = comb[i-1] + nums[i-1];
        int cntr = 0;
        unordered_map<int, int> freq;
        for(int i = 0; i <= n; i++)
        {
            int x = comb[i] - k;
            if(s.find(x) != s.end())
                cntr += freq[x];
            s.insert(comb[i]);
            freq[comb[i]]++;
        }
        return cntr;
    }
};
