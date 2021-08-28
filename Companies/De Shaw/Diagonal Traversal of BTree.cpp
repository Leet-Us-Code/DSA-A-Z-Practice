// Hari

vector<int> Solution::solve(TreeNode* A) {
    // fast
    ios_base::sync_with_stdio(false);
    vector<int> res;
    queue<TreeNode*> q; // will hold left ele for each node. This left ele comes in next diag
    // base
    if(A == nullptr) return res;
    q.push(A);
    
    while(!q.empty()){
        TreeNode* curr = q.front(); q.pop();
        
        while(curr != nullptr){
            res.push_back(curr->val);
            if(curr->left) q.push(curr->left);
            curr = curr->right;
        }
    }
    return res;
    
}
