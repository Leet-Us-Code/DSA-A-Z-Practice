// Hari

// Method - 1 - this doesn't consider that last ele of prev row < first ele of curr row. So not optimal

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // fast
        ios_base::sync_with_stdio(false); 
        int m = matrix.size();
        int n = matrix[0].size();
        
        int i = 0, j = n-1;
        while(j >= 0 && i < m){
            // if j goes out of bounds, target DNE
            // if target > curr ele, then go down as cols are sorted. 
            // if target < curr ele, then target should (if it exists) be in 
            // same row. So go left
            
            if(matrix[i][j] == target) return true;
            else if(target > matrix[i][j]) i++; // down
            else j--; // left 
        }
        // not found
        return false;
    }

// Method - 2 - most optimal (binary search)

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // fast
        ios_base::sync_with_stdio(false); 
        if(!matrix.size()) return false; 
        
        int rows = matrix.size(); int cols = matrix[0].size();
        int lo = 0, hi = (rows*cols) - 1;
        
        while(lo <= hi){
            int mid = (lo + (hi - lo)) / 2;
            //indexRow = mid/cols and indexCol = mid%cols;
            if(matrix[mid/cols][mid%cols] == target) return true;
            
            if(matrix[mid/cols][mid%cols] < target) lo = mid+1;
            else hi = mid-1;
        }
        return false;
    }

