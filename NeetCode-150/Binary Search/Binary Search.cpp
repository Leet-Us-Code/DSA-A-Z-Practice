// Hari

int search(vector<int>& nums, int target) {
        int N = nums.size();
        int l = 0, r = N-1;
        
        while (l <= r) {
            int M = l + ((r - l) / 2);
            if (nums[M] == target) return M;
            else if (nums[M] < target) l = M + 1;
            else r = M - 1;
        }
        
        return -1; 
    }
