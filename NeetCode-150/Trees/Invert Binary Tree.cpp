// Hari

TreeNode* invertTree(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        TreeNode* head = root;

        // base
        if (root == nullptr) return NULL;

        // Do DFS - Pre-order traversal (Root, Left, Right)
        // 1. Swap child nodes of curr root
        TreeNode* tmp = new TreeNode();
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        // 2. Move to left node sub tree of curr, and do the same via recursion 
        invertTree(root->left);
        // 3. Do for right also
        invertTree(root->right);

        return head;
    }
