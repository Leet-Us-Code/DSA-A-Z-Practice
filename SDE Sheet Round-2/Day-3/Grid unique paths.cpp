// Hari

int uniquePaths(int m, int n) {
        // fast
        ios_base::sync_with_stdio(false); 
        vector<vector<int>> matrix(m, vector<int>(n, 1));
        // first row and col have only 1 path. 1 is already set in prev step so no change. 
        // We do not calculate number of steps at each cell. Rather we calculate no. of paths we can take to reach that particular cell
        
        for(int i = 1; i<m; i++){
            for(int j = 1; j<n; j++){
                matrix[i][j] = matrix[i-1][j] + matrix[i][j-1]; 
                // not calculating steps so won't do +1 or max(matrix[i-1][j], matrix[i][j-1])
            }
        }
        
        return matrix[m-1][n-1];
    }
