// Hari

// DFS

int minDepth(TreeNode* root) {
        // base
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr) return 1; // leaf
        if(root->left == nullptr) return 1 + minDepth(root->right);
        if(root->right == nullptr) return 1 + minDepth(root->left);
        
        // once all nodes traversed and come back to root, we find min depth
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }

// BFS

int minDepth(TreeNode* root) {
        // base
        if(root == nullptr) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int lvl = 0;
        
        while(!q.empty()){
            int qSize = q.size();
            while(qSize--){
                TreeNode* curr = q.front(); q.pop();
                if(curr->left == nullptr && curr->right == nullptr) return lvl + 1;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            lvl += 1;
        }
        return -1;
    }


