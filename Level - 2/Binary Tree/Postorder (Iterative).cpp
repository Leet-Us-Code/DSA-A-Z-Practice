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
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> helper(TreeNode *root)
    {
        vector<int> res;
        if(root == NULL)
            return res;
        stack<TreeNode*> s;
        s.push(root);
        while(s.size() > 0)
        {
            TreeNode *x = s.top();
            res.push_back(x->val);
            s.pop();
            if(x->left != NULL)
                s.push(x->left);
            if(x->right != NULL)
                s.push(x->right);
        }
        reverse(res.begin(), res.end());
        return res;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res = helper(root);
        return res;
    }
};
