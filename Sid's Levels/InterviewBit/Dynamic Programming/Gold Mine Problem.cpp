// Recursive (Backtracking) solution 
class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isSafe(int r, int c, vector<vector<int>> mat, vector<vector<bool>> &visited)
    {
        int m = mat.size();
        int n = mat[0].size();
        if(r < 0 || r >= m || c < 0 || c >= n || mat[r][c] == 0 || visited[r][c] == true)
        return false;
        return true;
    }
    int maxGoldHelper(int r, int c, vector<vector<int>> mat, vector<vector<bool>> &visited)
    {
        if(!isSafe(r, c, mat, visited))
        return 0;
        visited[r][c] = true;
        int up = maxGoldHelper(r-1, c+1, mat, visited);
        int down = maxGoldHelper(r+1, c+1, mat, visited);
        int right = maxGoldHelper(r, c+1, mat, visited);
        visited[r][c] = false;
        int res = mat[r][c] + max({up, down, right});
        return res;
    }
    int maxGold(int n, int m, vector<vector<int>> mat)
    {
        // code here
        
        int maxCoins = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            vector<vector<bool>> visited(n, vector<bool>(m, false));
            int curCoins = maxGoldHelper(i, 0, mat, visited);
            maxCoins = max(maxCoins, curCoins);
        }
        return maxCoins;
    }
};

//DP (tabulation) 
class Solution{
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int maxGold(int m, int n, vector<vector<int>> mat)
    {
        // code here
        int dp[m][n]; 
        //last column will be same 
        if(m == 1)
        {
            int sum = 0;
            for(int ele : mat[0])
            sum += ele;
            return sum;
        }
        for(int i = 0; i < m; i++)
        dp[i][n-1] = mat[i][n-1];
        for(int j = n-2; j >= 0; j--)
        {
            for(int i = m-1; i >= 0; i--)
            {
                int d1 = -1, d2 = -1, d3 = -1;
                if(i == 0)
                {
                    d2 = dp[i][j+1];
                    d3 = dp[i+1][j+1];
                }
                else if(i == m-1)
                {
                    d1 = dp[i-1][j+1];
                    d2 = dp[i][j+1];
                }
                else 
                {
                    d1 = dp[i-1][j+1];
                    d2 = dp[i][j+1];
                    d3 = dp[i+1][j+1];
                }
                dp[i][j] = mat[i][j] + max({d1, d2, d3});
            }
        }
        // for(int i = 0; i < m; i++)
        // {
        //     for(int j = 0; j < n; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        int maxEle = INT_MIN;
        for(int i = 0; i < m; i++)
        maxEle = max(maxEle, dp[i][0]);
        return maxEle;
    }
};
