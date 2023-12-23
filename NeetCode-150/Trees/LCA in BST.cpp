// Hari

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // fast
        ios_base::sync_with_stdio(false);

        // edge
        if (!root) return NULL;

        // base
        if (p->val == root->val || q->val == root->val) return root;
        // both targets in different subtrees of curr node (root)
        if ((p->val < root->val && q->val > root->val) || (p->val > root->val &&
        q->val < root->val)) return root;

        // LCA in same side of BST (same subtree)
        if (p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left, p, q);
        if (p->val > root->val && q->val > root->val) return lowestCommonAncestor(root->right, p, q); 

        // no LCA - won't execute as we are guaranteed a LCA 
        return NULL;
    }
