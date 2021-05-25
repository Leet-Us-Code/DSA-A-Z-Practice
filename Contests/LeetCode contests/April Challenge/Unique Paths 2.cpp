class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int matrix[1000][1000];
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int flagRow = 0;
        int flagCol = 0;
        //first row 
        for(int i = 0; i < n; i++)
        {
            if(obstacleGrid[0][i] == 1)
            {
                flagRow = 1;
            }
            if(flagRow == 1)
            {
                matrix[0][i] = 0;
            }
            else
            {
                matrix[0][i] = 1;
            }
        }
        //first column 
        for(int i = 0; i < m; i++)
        {
            if(obstacleGrid[i][0] == 1)
            {
                flagCol = 1;
            }
            if(flagCol == 1)
                matrix[i][0] = 0;
            else
                matrix[i][0] = 1;
        }
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(obstacleGrid[i][j] == 1)
                    matrix[i][j] = 0;
                else
                    matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
            }
        }
        return matrix[m-1][n-1];
    }
};
