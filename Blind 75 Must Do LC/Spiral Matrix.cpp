// Hari

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int top = 0, left = 0, down = rows-1, right = cols-1;
        vector<int> res;
        
        while(res.size() < rows*cols){
            for(int j = left; j<=right; j++){
                res.push_back(matrix[top][j]);
            }
            top += 1;
            
            for(int i = top; i<=down; i++){
                res.push_back(matrix[i][right]);
            }
            right -= 1;
            
            for(int j = right; j>=left; j--){
                res.push_back(matrix[down][j]);
            }
            down -= 1;
            
            for(int i = down; i>=top; i--){
                res.push_back(matrix[i][left]);
            }
            left += 1;
        }
        
        // to ensure we do not have extra elements 
        res.resize(rows*cols); // extra elements (if any) are removed
        return res;
    }
