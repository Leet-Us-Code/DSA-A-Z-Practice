// Hari

vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int qSize = q.size();
            vector<int>currlvlEle;
            while(qSize--){
                TreeNode* curr = q.front(); q.pop();
                currlvlEle.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        res.push_back(currlvlEle);
        }
        return res;
    }
