class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }
        int maxLen = 0;
        for(int i = 0; i < n; i++)
        {
            int suc = nums[i] + 1;
            int pred = nums[i] - 1;
            if(s.find(pred) == s.end())
            {
                int len = 1;
                while(s.find(suc) != s.end())
                {
                    len++;
                    suc++;
                }
                maxLen = max(len, maxLen);
            }
        }
        return maxLen;
    }
};
