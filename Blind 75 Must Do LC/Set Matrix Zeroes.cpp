// Hari

 void setZeroes(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        // we use variable to keep track of whether col1 should be made fully 0 or not
        int firstColFlag = 1; 
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for(int i = 0; i<rows; i++){
            if(matrix[i][0] == 0) firstColFlag = 0; // if any cell in col1 == 0
            for(int j = 1; j<cols; j++){
                if(matrix[i][j] == 0) matrix[i][0] = matrix[0][j] = 0;
            }
        }
        
        // now go from back of matrix and check for each cell whether its perpendicular 
        // value in first row or first col == 0
        // we go from back so that we do not tamper w the first row and cols before 
        // calculating the rest of the matrix
        
        for(int i = rows-1; i>=0; i--){
            for(int j = cols-1; j>0; j--){ // not going to first col
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
            if(!firstColFlag){
            // if the var == 0 then make first col fully into 0
            matrix[i][0] = 0;
            }
        }
    }
