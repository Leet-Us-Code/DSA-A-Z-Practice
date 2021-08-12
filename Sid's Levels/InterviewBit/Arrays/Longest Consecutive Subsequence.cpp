class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }
        int maxLen = 0;
        for(int i = 0; i < n; i++)
        {
            int curEle = nums[i];
            int len = 0;
            if(s.find(curEle-1) == s.end())
            {
                //possible start
                while(s.find(curEle) != s.end())
                {
                    len++;
                    curEle++;
                }
                maxLen = max(maxLen, len);
            }
            else
                continue;
        }
        return maxLen;
    }
};
