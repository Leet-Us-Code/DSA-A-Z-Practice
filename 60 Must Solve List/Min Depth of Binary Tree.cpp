// Hari

// DFS

int minDepth(TreeNode* root) {
        // base cases
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr) return 1; // leaf reached
        if(root->left == nullptr) return 1 + minDepth(root->right); // doing if(root->left) return 1 + minDepth(root->left) gives WA
        if(root->right == nullptr) return 1 + minDepth(root->left); // likewise
        
        // standard dfs traversal code. This starts executing from the root
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
                if(curr->left == nullptr && curr->right == nullptr) return lvl + 1; // the first time a leaf is met, we return final ans. 
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            lvl += 1;
        }
        return -1;
    }


