// Hari
// Method - 1 (using external vectors)

void setZeroes(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        
        int matrixRows = matrix.size();
        int matrixCols = matrix[0].size();
        vector<int> rowFlag(matrixRows, 0);
        vector<int> colFlag(matrixCols, 0);

        for(int i = 0; i<matrixRows; i++){
            for(int j = 0; j<matrixCols; j++){
                if(matrix[i][j] == 0){
                    // set row and col flags = 1
                    rowFlag[i] = 1;
                    colFlag[j] = 1;
                }
            }
        }

        for(int i = 0; i<matrixRows; i++){
            for(int j = 0; j<matrixCols; j++){
                if(rowFlag[i] == 1 || colFlag[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }

// Method - 2 
void setZeroes(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        int m = matrix.size(); 
        int n = matrix[0].size(); 

        // using flags to track the first row and first col 
        bool rowFlag = false, colFlag = false; 

        // for the first row
        for(int i = 0; i < n; i++){
            if(matrix[0][i] == 0)
                rowFlag = true;
        }

        // for the first col 
        for(int j = 0; j < m; j++){
            if(matrix[j][0] == 0)
                colFlag = true;
        }

        // for the rest of the matrix 
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0; 
                    matrix[0][j] = 0;
                }
            }
        }

        // we reflect the changes 
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // now for the first row and first col 

        if(rowFlag){
            for(int i = 0; i < n; i++){
                matrix[0][i] = 0;
            }
        }

        if(colFlag){
            for(int j = 0; j < m; j++){
                matrix[j][0] = 0;
            }
        }
    }
