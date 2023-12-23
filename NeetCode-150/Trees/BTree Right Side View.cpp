// Hari

vector<int> rightSideView(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<int> res;

        // edge
        if (!root) return res;
        deque<TreeNode*> dq;
        dq.push_back(root); 

        // BFS / Level Order 
        while(!dq.empty()) {
            int levelSize = dq.size();
            for(int i = 1; i <= levelSize; i++) {
                TreeNode* curr = dq.front(); 
                if (i == levelSize) {
                    // this is rightmost node
                    res.push_back(curr->val);
                } 
                dq.pop_front(); 
                if (curr->left) dq.push_back(curr->left);
                if (curr->right) dq.push_back(curr->right);
            }
        }

        return res;
    }
