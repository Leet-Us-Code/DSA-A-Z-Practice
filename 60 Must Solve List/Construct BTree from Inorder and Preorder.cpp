// Hari

unordered_map<int, int> umap;
    int idx = 0;

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int start, int end){
        // base
        if(start > end) return nullptr;
        TreeNode* curr = new TreeNode(preorder[idx++]);
        if(start == end) return curr; // leaf
        int inIdx = umap[curr->val]; // index of root in inorder
        curr->left = helper(preorder, inorder, start, inIdx-1);
        curr->right = helper(preorder, inorder, inIdx+1, end);
        return curr;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // construct a map with inorder's elements for constant time lookup
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        umap.clear();
        int N = inorder.size();
        for(int i = 0; i<N; i++){
            umap[inorder[i]] = i;
        }
        return helper(preorder, inorder, 0, N-1);
    }
