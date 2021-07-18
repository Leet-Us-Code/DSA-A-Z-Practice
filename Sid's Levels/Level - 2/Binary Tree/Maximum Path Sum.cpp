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
    int helper(TreeNode *root, int &res)
    {
        if(root == NULL)
        {
            return 0;
        }
        int l = helper(root->left, res);
        int r = helper(root->right, res);
        int sentToTop = max(root->val, root->val + max(l,r));
        int subTreeSum = max(sentToTop, root->val + l + r);
        res = max(res, subTreeSum);
        return sentToTop;
    }
    int maxPathSum(TreeNode* root) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA   
        int res = INT_MIN;
        int x = helper(root, res);
        return res;
    }
};
