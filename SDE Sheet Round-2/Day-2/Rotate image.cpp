// Hari

void rotate(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        int n = matrix.size();
        // transpose matrix and then reverse the rows 
        
        // transpose
        for(int i = 0; i<n; i++){
            for(int j = 0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // reverse each row
        for(int i = 0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
