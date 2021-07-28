// Hari

// DFS

int maxDepth(TreeNode* root) {
        // base 
        if(root == nullptr) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

// BFS

int maxDepth(TreeNode* root) {
        // check
        if(root == nullptr) return 0;
        queue<TreeNode *> q;
        q.push(root);
        int lvl = 0;
        
        while(!q.empty()){
            int qSize = q.size(); // for this level
            while(qSize--){
                TreeNode* curr = q.front(); q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            lvl += 1;
        }
        
        return lvl;
    }
