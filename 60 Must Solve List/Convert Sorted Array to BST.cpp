// Hari

TreeNode* helper(vector<int> nums, int start, int end){
        if(start >= end) return nullptr;
        int midIdx = start + (end - start) / 2;
        TreeNode* curr = new TreeNode(nums[midIdx]);
        curr->left = helper(nums, start, midIdx);
        curr->right = helper(nums, midIdx+1, end);
        
        return curr;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // elements to left of mid will be in left subtree of root. same for right
        int N = nums.size();
        return helper(nums, 0, N);
    }
