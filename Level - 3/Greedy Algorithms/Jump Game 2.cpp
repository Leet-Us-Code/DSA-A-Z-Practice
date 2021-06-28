class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int jump(vector<int>& nums) {
        int jumps = 0, curEnd = 0, curFarthest = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            curFarthest = max(curFarthest, i + nums[i]);
            if(i == curEnd)
            {
                jumps++;
                curEnd = curFarthest;
            }
        }
        return jumps;
    }
};
