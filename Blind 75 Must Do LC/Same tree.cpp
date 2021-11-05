// Hari

bool isSameTree(TreeNode* p, TreeNode* q) {
        // both node values and node position should match on both trees
        // fast
        ios_base::sync_with_stdio(false);
        // base checks
        if(p == nullptr && q == nullptr) return true; // both null
        else if(p == nullptr || q == nullptr) return false; // one of them is null
        else if(p->val != q->val) return false; // values mismatch
        else return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
        // nodes match. So, check subtrees.         
    }
