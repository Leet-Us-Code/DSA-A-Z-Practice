// Hari

unordered_map<int, int> umap;
    int idx = 0;
    
    TreeNode* helper(vector<int> inorder, vector<int> postorder, int start, int end, int &idx){
        // checks
        if(idx < 0 || start > end) return nullptr;
        TreeNode *curr = new TreeNode(postorder[idx--]); // parent
        if(start == end) return curr; // leaf node
        // find parent node val in inorder
        int mid = umap[curr->val];
        // recursive calls
        // Why right first? Because postorder goes as left->right->root and we are traversing it from end. So we consider in order root->right->left
        curr->right = helper(inorder, postorder, mid+1, end, idx);
        curr->left = helper(inorder, postorder, start, mid-1, idx);
        return curr;        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // fast
        ios_base::sync_with_stdio(false);
        // postorder gives parent when traversed from back
        // find parent in inorder -> left of it is left subtree, right is right
        int N = inorder.size();
        umap.clear();
        idx = N-1;
        
        for(int i = 0; i<N; i++) umap[inorder[i]] = i;
        TreeNode* root = helper(inorder, postorder, 0, N-1, idx);
        return root;
    }
