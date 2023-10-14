// Hari

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        
        /**
        Let's say this is nums = [1 1 1 1 1 4 5] and k = 6
        in first iteration of window we know max element = 4 
        but in second iteration we still have to traverse 4 ones which is unnecessary.
        We can start from val = 4 and check if there is a val > 4 in iter-2 window
        
        So use a monotonically decreasing deque. Element on left most is always max element 
        of a window. If new element is less than max element on left -> add it to right
        If new element is greater, keep popping elements from left until element on left is
        greater than new element. If DNE, then new element is leftmost element. 
        
    In deque, Left is front and Right is back. Add elements from back, pop elements from left
        */
        
        deque<int> dq;
        vector<int> res;
        
        for (int i = 0; i<nums.size(); i++) {
            // remove out of bounds elements from dq i.e. start of previous window 
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front(); 
            }
            
            // before adding element idx, check if earlier idx val is greater. If not, pop it.
            while (!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
            dq.push_back(i);
            
            // after first k iterations, every i iteration will point to 
            // last element of new window. 
            if (i >= k-1) {
                // when at last element of a window, we should add max val to res. 
                res.push_back(nums[dq.front()]);
            }
        }
        
        return res;
    }
