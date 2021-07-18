class Solution {
public:
    int uniquePaths(int m, int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int grid[m][n];
        //first row will be having 1
        for(int i = 0; i < n; i++)
            grid[0][i] = 1;
        //first col will also have 1 
        for(int i = 0; i < m; i++)
            grid[i][0] = 1;
        //remaining
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                grid[i][j] = grid[i-1][j] + grid[i][j-1];
            }
        }
        return grid[m-1][n-1];
        
    }
};
