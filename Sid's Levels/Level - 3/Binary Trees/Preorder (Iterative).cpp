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
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
            return {};
        stack<TreeNode*> s;
        s.push(root);
        vector<int> res;
        while(!s.empty())
        {
            TreeNode *x = s.top();
            s.pop();
            res.push_back(x->val);
            if(x->right)
                s.push(x->right);
            if(x->left)
                s.push(x->left);
        }
        return res;
    }
};
