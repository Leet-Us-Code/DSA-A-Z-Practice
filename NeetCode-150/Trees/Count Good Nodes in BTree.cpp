// Hari

int goodNodes(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);

        // edge
        if (!root) return 0;

        // root will always be a good node
        int res = 1; 

        int leftCount = 0, rightCount = 0;
        helper(root->left, root->val, leftCount);
        helper(root->right, root->val, rightCount);
        res = res + leftCount + rightCount; 

        return res;
    }

    void helper(TreeNode* node, int maxTillNow, int& count) {
        // edge
        if (!node) return;
        
        // Curr val is >= maxTillNow -> update maxTillNow and increase count
        if (node->val >= maxTillNow) {
            maxTillNow = node->val;
            count += 1;
        }
        // Curr val is < maxTillNow -> do nothing. move to next node 
        else {
            // do nothing 
        }

        // Corrected conditions
        if (node->left) helper(node->left, maxTillNow, count);
        if (node->right) helper(node->right, maxTillNow, count);
    }
