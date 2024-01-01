// Hari

// Quick select approach
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // fast
        ios_base::sync_with_stdio(false);

        // Quick select approach [similar to QuickSort] - nums is not sorted 
        k = nums.size() - k; // target element idx we want to return 

        return quickSelect(nums, 0, nums.size() - 1, k);
    }

    int quickSelect(vector<int>& nums, int l, int r, int k) {
        // choose the pivot element

        int pivot = nums[r];

        int p = l; // pointer idx where the element is assigned to. If curr <= pivot, add element in p position and p++. If not, keep p as is and move to next element. 

        // iterate till before last element at r idx. 
        for(int i = l; i<r; i++){
            if (nums[i] <= pivot) {
                // swap with value at idx p
                swap(nums, p, i);
                p++; 
            } else {
                // do nothing. keep iterating 
            }
        }

        // after all swaps done, move the pivot value (which is at nums[r]) to wherever p idx currently is. This ensures that all elements <= pivot is to its left, and all nums greater are to its right. These left and right partitions themselves are not guarateed to be in correct/sorted order though. However the value at p will be exactly where it is supposed to be (in a sorted order). Hence we do this quick select iteratively until the k idx is equal to p. And unlike quick sort this iteration is only done for one half (which we believe has the kth largest element) and not for both halves always. Hence TC is O(n) in avg case. It will be O(n**2) in worst case though. 

        // nums[r] is pivot (as we assigned it above in L17)
        swap(nums, p, r);

        if (k < p) {
            // ans not found. target(k) idx is less than p. Quick select on left side of p;
            return quickSelect(nums, l , p - 1, k);
        } else if (k > p) return quickSelect(nums, p + 1, r, k);
        else return nums[p]; // ans found if k == p 
    }

    void swap(vector<int>& nums, int idx1, int idx2) {
        int temp = nums[idx1];
        nums[idx1] = nums[idx2];
        nums[idx2] = temp;
    }
};



// Simple solution using heap
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        priority_queue<int> pq; // max heap
        int res = 0;

        for(auto it: nums) pq.push(it);

        while(k-- > 0) {
            res = pq.top();
            pq.pop();
        }

        return res; 
    }
};
