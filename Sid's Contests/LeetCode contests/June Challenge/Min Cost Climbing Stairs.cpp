class Solution {
public:
    int min(int x, int y)
    {
        if(x < y)
            return x;
        else
            return y;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //same as the dp problem with stairs 
        int dp[1000];
        dp[0] = cost[0];
        dp[1] = cost[1];
        int n = cost.size();
        for(int i = 2; i < n; i++)
        {
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
};
