// Hari

void rotate(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        // transpose curr matrix
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // reverse each row of matrix
        for(int i = 0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
