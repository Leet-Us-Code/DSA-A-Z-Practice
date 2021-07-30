// Hari

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
        int LtoR = true; 
        
        while(!q.empty()){
            int qSize = q.size();
            vector<int> ans(qSize); 
            
            for(int i = 0; i<qSize; i++){ // for this particular level
                TreeNode* curr = q.front(); q.pop();
                if(LtoR){
                    // left to right
                    ans[i] = curr->val;
                } else {
                    // right to left
                    ans[qSize - i - 1] = curr->val;
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            // after this level, invert
            LtoR = !LtoR;
            res.push_back(ans);
            ans.clear();
            
        }
        
        return res;
    }
};
