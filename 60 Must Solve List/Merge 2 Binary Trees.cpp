// Hari

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // fast io
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        // base 
        if(root1 && root2){
            TreeNode* curr = new TreeNode(root1->val + root2->val);
            curr->left = mergeTrees(root1->left, root2->left);
            curr->right = mergeTrees(root1->right, root2->right);
            return curr;
        } else {
            // either or neither one of them exists
            return root1 ? root1 : root2;
        }
    }
