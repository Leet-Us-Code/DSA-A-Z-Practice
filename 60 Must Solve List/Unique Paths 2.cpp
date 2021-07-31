// Hari

O(m*n)
  
int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> dp(rows+1, vector<int>(cols+1,1));
        
        // check first row and first col of grid and if obstacle there, then all cells after it 
        // get value 0 and the reachable cells get 1 just like Unique Paths 1
        bool rowObstacle = false;
        bool colObstacle = false;
        
        for(int i = 0; i<rows; i++){
            if(rowObstacle || grid[i][0] == 1){
                rowObstacle = true;
                dp[i][0] = 0;
            }
            else dp[i][0] = 1;
        }
        
        for(int i = 0; i<cols; i++){
            if(colObstacle || grid[0][i] == 1){
                colObstacle = true;
                dp[0][i] = 0;
            }
            else dp[0][i] = 1;
        }
        
        // now do standard unique path sum except check if cell is valid first
        
        for(int i = 1; i<rows; i++){
            for(int j = 1; j<cols; j++){
                if(grid[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                } else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        
        return dp[rows-1][cols-1];
    }
  
