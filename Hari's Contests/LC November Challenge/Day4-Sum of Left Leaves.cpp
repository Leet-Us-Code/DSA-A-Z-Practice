// Hari

int sumOfLeftLeaves(TreeNode* root) {
        // fast io
        ios_base::sync_with_stdio(false);
        // base case
        if(!root) return 0;
        // if node left of curr node is a LEFT LEAF
        if(root->left && root->left->left == nullptr && root->left->right == nullptr)
            return root->left->val + sumOfLeftLeaves(root->right); 
        // left node is a leaf, so we recurse to right side of root
        
        // standard recursion on both sides
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
