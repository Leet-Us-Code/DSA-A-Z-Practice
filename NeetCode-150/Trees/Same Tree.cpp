// Hari

bool isSameTree(TreeNode* p, TreeNode* q) {
        // fast
        ios_base::sync_with_stdio(false);

        // base
        if (!p && !q) return true; // both are null 
        if (!p || !q) return false; // only one of them is null 
        
        // both nodes non empty  
        if (p->val == q->val) {
            return isSameTree(p->left, q->left) &&  
            isSameTree(p->right, q->right);
        } else {
            return false;
        }

        return true; 
    }
