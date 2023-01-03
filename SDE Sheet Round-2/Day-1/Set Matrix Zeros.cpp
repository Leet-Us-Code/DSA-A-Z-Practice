


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

// Method - 2 (inplace)
void setZeroes(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        // var to keep track of col0's status
        int firstColFlag = 1;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // set status of firstColFlag and status of perpendicular elements based on current elements
        for(int i = 0; i<rows; i++){
            if(matrix[i][0] == 0) firstColFlag = 0; // make it 0
            for(int j = 1; j<cols; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                    // changing values of perpendicular to element
                }
            }
        }
        
        // start from back -> if both perpendicular elements are 0, make curr ele as 0. We go from back to not change values of first few rows and cols
        for(int i = rows-1; i>=0; i--){
            for(int j = cols-1; j>0; j--){
                // we dont touch 0th col
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
            if(firstColFlag == 0) matrix[i][0] = 0;
        }
        
    }
