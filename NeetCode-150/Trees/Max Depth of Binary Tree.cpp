// Hari

// Recursive DFS (Pre Order) 
int maxDepth(TreeNode* root) {
        ios_base::sync_with_stdio(false);

        // base
        if (root == nullptr) return 0; 
        else return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

// Iterative BFS

int maxDepth(TreeNode* root) {
        // fast - BFS 
        ios_base::sync_with_stdio(false);
        deque<TreeNode*> dq;
        dq.push_back(root);
        int depth = 0;

        // edge-case
        if (root == nullptr) return depth; 

        while(!dq.empty()) {
            // Traverse a level fully before inc. depth count 
            int currLevelSize = dq.size();
            while (currLevelSize > 0) {
                TreeNode* curr = dq.front();
                dq.pop_front();
                if (curr->left) dq.push_back(curr->left);
                if (curr->right) dq.push_back(curr->right);
                currLevelSize--;
            }

            depth += 1;            
        }

        return depth;
    }

// Iterative DFS (Pre order) 

int maxDepth(TreeNode* root) {
        // fast 
        ios_base::sync_with_stdio(false);
        stack<pair<TreeNode*, int>> stk;
        int maxDepth = 0;

        // edge-case
        if (root == nullptr) return 0;
        stk.push(make_pair(root, 1));

        while(!stk.empty()) {
            TreeNode* currNode = stk.top().first;
            int currDepth = stk.top().second;
            maxDepth = max(maxDepth, currDepth);

            stk.pop();

            currDepth++; 
            if (currNode->left) stk.push(make_pair(currNode->left, currDepth));
            if (currNode->right) stk.push(make_pair(currNode->right, currDepth));
        }

        return maxDepth;
    }
