class Solution {
public:
    int jump(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int maxReachable = nums[0];
        int steps = nums[0];
        int jump = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(i == nums.size() - 1)
                return jump;
            maxReachable = max(maxReachable, i + nums[i]);
            steps--;
            if(steps == 0)
            {
                jump++;
                if(i > maxReachable)
                    return -1;
                steps = maxReachable - i;
            }
        }
        return 0;
    }
};
