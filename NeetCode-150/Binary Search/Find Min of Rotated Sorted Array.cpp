// Hari

int findMin(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        int res = INT_MAX;

        int N = nums.size();
        int l = 0, r = N-1;

        while(l <= r) {
            // if we find a sorted range (l < r) return leftmost value directly
            if (nums[l] < nums[r]) {
                res = min(res, nums[l]);
                break;
            } 

            // if we are not in a sorted range
            int M = l + (r - l) / 2;
            res = min(res, nums[M]);
            // M divides array to 2 parts. Since rotation is by moving big numbers to left
            // right half of array will always have smallest element. So find the right half

            // If mid element >= leftmost element, mid element is in left half. Do l = M+1
            if (nums[M] >= nums[l]) l = M + 1;
            else r = M - 1;
        }

        return res;
    }
