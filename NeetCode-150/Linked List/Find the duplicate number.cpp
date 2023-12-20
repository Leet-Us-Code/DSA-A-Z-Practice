// Hari

int findDuplicate(vector<int>& nums) {
        // fast
        ios_base::sync_with_stdio(false);
        // Not a logical problem statement, memorize approach - Floyd Cycle method

        // Init fast and slow in same node (0th idx as 0 will never be part of cycle loop)
        int fast = nums[0], slow = nums[0];

        do {
            fast = nums[nums[fast]];
            slow = nums[slow];
        } while (fast != slow);

        // now fast and slow on same node

        // Create a new slow ptr at head. Move old and new slow by one till they reach. 
        // This point will be the node with duplicate number
        int slow2 = nums[0];
        while (slow != slow2) {
            slow = nums[slow];
            slow2 = nums[slow2];
        }

        // Both slow and slow2 in same node. This is the duplicate number. 
        return slow;
    }
