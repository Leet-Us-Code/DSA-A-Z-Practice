class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int area(vector<vector<int>> &grid, int i, int j)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(i < 0 || i == m || j < 0 || j == n || grid[i][j] == 0)
            return 0;
        grid[i][j] = 0;
        int x1 = area(grid, i-1, j);
        int x2 = area(grid, i+1, j);
        int x3 = area(grid, i, j-1);
        int x4 = area(grid, i, j+1);
        return 1+x1+x2+x3+x4;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxArea = 0;
        int cnt = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)
                {
                    cnt = 0;
                    int res = area(grid, i, j);
                    maxArea = max(res, maxArea);
                }
            }
        }
        return maxArea;
    }
};
