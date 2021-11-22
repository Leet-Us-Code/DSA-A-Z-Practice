// Hari

TreeNode* deleteNode(TreeNode* root, int key) {
        // fast
        ios_base::sync_with_stdio(false);
        if(root == nullptr) return nullptr; // empty tree
        if(root->val == key) return helper(root); // connect right child to left
        
        TreeNode* dummy = root;
        while(root != nullptr){
            if(root->val > key){
                // go left
                if(root->left != NULL && root->left->val == key){
                    root->left = helper(root->left); break;
                    // helper wil remove key node, attach root with key's left and attach key's right to rightmost part of left subT
                } else root = root->left;
            } else {
                // go right
                if(root->right != NULL && root->right->val == key){
                    root->right = helper(root->right); break;
                } else root = root->right;
            }
        }
        return dummy;
    }
    
    TreeNode* helper(TreeNode* root){
        if(root->left == NULL) return root->right;
        else if(root->right == NULL) return root->left;
        
        TreeNode* rightChild = root->right;
        TreeNode* lastRightChildOnLeft = findLastRight(root->left);
        lastRightChildOnLeft->right = rightChild;
        return root->left;
    }
    
    TreeNode* findLastRight(TreeNode* root){
        // keep traversing right to find rightmost node
        if(root->right == nullptr) return root;
        return findLastRight(root->right);
    }
