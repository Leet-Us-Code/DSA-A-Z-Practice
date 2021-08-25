// Hari

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // fast
        ios_base::sync_with_stdio(false);
        int m = matrix.size();
        int n = matrix[0].size();
        
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        
        vector<int> res;
        
        while (res.size() < m * n) {       
            for (int j = left; j <= right; j++) {
                res.push_back(matrix[top][j]);
            }

            top++;

            for (int i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }

            right--;

            for (int j = right; j >= left; j--) {
                res.push_back(matrix[bottom][j]);
            }

            bottom--;

            for (int i = bottom; i >= top; i--) {
                res.push_back(matrix[i][left]);
            }            
            
            left++;
        }
        
        res.resize(m * n); 
        // -> crucial : this helps remove unnecessarily added extra elements if any
        
        return res;
    }
