class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxLen = 0;
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++)
        {
            int prev = nums[i] - 1;
            //if prev exists it cant form a head 
            if(s.find(prev) == s.end())
            {
                //that means the current element is a head of a band 
                int head = nums[i];
                int len = 0;
                while(s.find(head) != s.end())
                {
                    len++;
                    head++;
                }
                maxLen = max(len, maxLen);
            }
        }
        return maxLen;
    }
};
