// Hari

// Method - 1
int maxDepth(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        // base
        if(!root) return 0;
        int left = maxDepth(root->left); 
        int right = maxDepth(root->right); 
        return max(left, right) + 1;
    }

// Method - 2
int maxDepth(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        return (!root) ? 0 : 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

// Method - 3
int maxDepth(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        // bfs method using queue
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int maxLvl = 0;
        
        while(!q.empty()){
            int qSize = q.size();
            while(qSize--){
                TreeNode* curr = q.front(); q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            maxLvl += 1;
        }
        return maxLvl;
    }
