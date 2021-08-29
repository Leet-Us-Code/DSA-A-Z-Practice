// Hari

vector<vector<int>> levelOrderBottom(TreeNode* root) {
        // just going to do standard level order, and reverse result
        vector<vector<int>> res;
        if(root == nullptr) return res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> currlvl;
            int qSize = q.size();
            while(qSize--){
                TreeNode* curr = q.front(); q.pop();
                currlvl.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res.push_back(currlvl);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
