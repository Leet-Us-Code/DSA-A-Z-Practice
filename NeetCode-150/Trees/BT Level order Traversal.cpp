// Hari

vector<vector<int>> levelOrder(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;

        // edge
        if (!root) return res;

        deque<TreeNode*> dq;
        dq.push_back(root);

        while(!dq.empty()) {
            vector<int> currLvlNodes;
            int currLvlSize = dq.size();

            while(currLvlSize-- > 0) {
                TreeNode* curr = dq.front(); dq.pop_front();
                currLvlNodes.emplace_back(curr->val);

                if (curr->left) dq.push_back(curr->left);
                if (curr->right) dq.push_back(curr->right);
            }
            res.push_back(currLvlNodes);
        }

        return res;
    }
