// Hari

vector<vector<int>> levelOrder(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        // sanity
        if(!root) return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int N = q.size(); // # of elements in this level
            vector<int> currlvl;
            while(N--){
                TreeNode* curr = q.front(); q.pop();
                currlvl.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res.push_back(currlvl);            
        }
        
        return res;
    }
