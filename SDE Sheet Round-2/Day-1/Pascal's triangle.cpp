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

// Hari

vector<vector<int>> generate(int numRows) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;

        for(int i = 0; i<numRows; i++){
            vector<int> row(i+1, 1); 
            // start from second index as first and last values will stay as 1
            for(int j = 1; j<i; j++){
                row[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(row);
        }

        return res; 
    }


// java
class Solution {
    static Long mod = new Long(1000000007);
    ArrayList<Long> nthRowOfPascalTriangle(int n) {
        // code here
        //JAI SHRI RAM 
        Long[][] matrix = new Long[n][n]; 
        for(int i = 0; i < n; i++){
            Long[] row = new Long[i+1]; 
            matrix[i][0] = new Long(1); 
            matrix[i][i] = new Long(1); 
            for(int j = 1; j < i; j++){
                matrix[i][j] = (matrix[i-1][j-1]%mod + matrix[i-1][j]%mod)%mod; 
            }
        }
        
        ArrayList<Long> arr = new ArrayList<Long>();
        
        for(int i = 0; i < n; i++){
            arr.add(new Long(matrix[n-1][i]));
        }
        
        return arr;
    }
}
