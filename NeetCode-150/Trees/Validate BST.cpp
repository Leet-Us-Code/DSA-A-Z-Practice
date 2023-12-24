// Hari

bool isValidBST(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        return helper(root, nullptr, nullptr); 
    }

    bool helper(TreeNode* curr, TreeNode* minVal, TreeNode* maxVal) {
        // base
        if (!curr) return true;

        // Failure 
        if (minVal && curr->val <= minVal->val || maxVal && curr->val >= maxVal->val) return false;

        // Recursion
        return helper(curr->left, minVal, curr) && helper(curr->right, curr, maxVal);
    }
