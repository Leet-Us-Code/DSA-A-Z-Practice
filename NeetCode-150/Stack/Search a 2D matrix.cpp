// Hari

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //fast
        ios_base::sync_with_stdio(false);
        
        int M = matrix.size();
        if (M == 0) return false;
        int N = matrix[0].size();
        return search(matrix, M, N, 0, M-1, target);
    }
    
    bool search(vector<vector<int>>& matrix, int rowSize, int colSize,
               int start, int end, int target) {
        while (start <= end) {
            int mid = start + ((end - start) / 2);
            vector<int>& midRow = matrix[mid];
            if (midRow[0] <= target && midRow[colSize - 1] >= target) {
                // target in curr row 
                return bSearch(midRow, target);
            } else if (midRow[colSize - 1] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
    
    bool bSearch(vector<int>& nums, int target) {
        int N = nums.size();
        int l = 0, r = N-1;
        
        while (l <= r) {
            int M = l + ((r - l) / 2);
            if (nums[M] == target) return true;
            else if (nums[M] < target) l = M + 1;
            else r = M - 1;
        }
        
        return false; 
    }
