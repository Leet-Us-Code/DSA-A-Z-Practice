// Hari

vector<vector<int>> generate(int numRows) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> matrix;
        
        for(int i = 0; i<numRows; i++){
            // create a vector of i+1 size
            int length = i+1;
            vector<int> curr(length, 0);
            curr[0] = 1, curr[length-1] = 1;
            for(int j = 1; j<length-1; j++){
                curr[j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
            matrix.emplace_back(curr);
        }
        
        return matrix;
    }
