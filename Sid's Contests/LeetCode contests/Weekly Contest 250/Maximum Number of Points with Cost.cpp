//Naive soln 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    long long maxPoints(vector<vector<int>>& points) {
        long long int m = points.size();
        long long int n = points[0].size(); 
        vector<vector<long long int>> dp(m, vector<long long int>(n, -1));
        //first row will be the same only 
        for(int i = 0; i < n; i++)
        {
            dp[0][i] = points[0][i];
        }
        for(int i = 1; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    dp[i][j] = max(dp[i][j], dp[i-1][k] + points[i][j] - abs(j-k));
                }
            }
        }
        //scan the last row of dp 
        long long int maxEle = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxEle = max(maxEle, dp[m-1][i]);
        }
        return maxEle;
    }
};
