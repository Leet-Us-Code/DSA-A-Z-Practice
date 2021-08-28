// Hari

// Method - 1

void helper(TreeNode* root, vector<int> &res, int level){
        // base
        if(root == nullptr) return;
        // if size of res == level -> we have added the rightmost ele of curr level. So move to next
        if(res.size() < level) res.push_back(root->val);
        // recurse right then left. [reverse postorder]
        helper(root->right, res, level+1);
        helper(root->left, res, level+1);
    }
    
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        int level = 1; 
        helper(root, res, level);
        return res;
    }

// Method - 2

vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode* > q;
        if(root == nullptr) return res;
        q.push(root);
        while(!q.empty()){
            int N = q.size();
            for(int i = 1; i<=N; i++){
                TreeNode* curr = q.front(); q.pop();
                if(i == N) res.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return res;
    }
