// hari

// recursive fun
    void helper(TreeNode* root, int currSum, int &res){
        // currSum is NOT call-by-ref as this val is reverted for each path
        // base
        if(root == nullptr) return;
        // if root has some value in it
        currSum = (currSum*10) + root->val;
        // if this is the leaf, add this currSum to res
        if(root->left == nullptr && root->right == nullptr){
            res += currSum;
            //currSum = 0;
        }
        // recursive calls
        if(root->left) helper(root->left, currSum, res);
        if(root->right) helper(root->right, currSum, res);
        
    }
    
    int sumNumbers(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        // base
        if(root == nullptr) return 0;
        int res = 0; // final result
        int currSum = 0;
        // recursion
        helper(root, currSum, res);
        return res;
    }
