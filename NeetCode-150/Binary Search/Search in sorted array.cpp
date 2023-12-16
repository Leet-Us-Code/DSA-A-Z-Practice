// Hari

int search(vector<int>& nums, int target) {
        // fast
        ios_base::sync_with_stdio(false);

        int N = nums.size();
        int l = 0, r = N-1;
        int resIdx = -1;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                resIdx = mid;
                break;
            }

            // Left half is sorted
            if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid]) {
                    // Target is in left half
                    r = mid - 1;
                } else {
                    // Target is in right half
                    l = mid + 1;
                }
            } else {
                if (nums[r] >= target && target > nums[mid]) {
                    // Target is in right half
                    l = mid + 1;
                } else {
                    // Target is in left half 
                    r = mid - 1;
                }

            }
        }

        return resIdx;
    }
