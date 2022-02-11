void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // fast
        ios_base::sync_with_stdio(false);
        // 3 pointers approach - i maintains last non 0 num on nums1, j traverses from rear of nums2, and k traverses from rear of nums1. 
        //since nums1 beginning is filled, we traverse from back. And since nums2 is also sorted, then going from back of nums2 will give big numbers to enter into nums1's rear
        
        int i = m-1, j = n-1, k = m + n - 1;
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--]; // we push this nums1[i] to the right to make space for a potentially smaller nums2[j]
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        // any remaining ele in nums2 is pushed to nums1
        while(j >= 0){
            nums1[k--] = nums2[j--];
        }
    }
