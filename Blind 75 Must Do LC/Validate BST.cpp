// Hari

bool helper(TreeNode* root, TreeNode* minVal, TreeNode* maxVal){
        // base
        if(!root) return true;
        // fail
        if(minVal && root->val <= minVal->val || maxVal && root->val >= maxVal->val) return false;
        // recursive
        return helper(root->left, minVal, root) && 
        helper(root->right, root, maxVal);
    }
    
    
    
    bool isValidBST(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        return helper(root, NULL, NULL); // min and max limits for each node
        // if a child fails to be within this range, return false        
    }
