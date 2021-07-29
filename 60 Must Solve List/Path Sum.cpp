// Hari

bool hasPathSum(TreeNode* root, int targetSum) {
        // base
        if(root == nullptr) return false;
        if(root->left == nullptr && root->right == nullptr && root->val == targetSum) return true;
        
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
