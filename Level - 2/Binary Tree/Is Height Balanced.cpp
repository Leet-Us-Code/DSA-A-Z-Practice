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
    bool helper(TreeNode *root, int &h)
    {
        if(root == NULL)
        {
            h = 0; 
            return true;
        }
        int lh = 0, rh = 0;
        bool l = helper(root->left, lh);
        bool r = helper(root->right, rh);
        h = max(lh, rh) + 1;
        if(l && r && abs(lh-rh) <= 1)
            return true;
        else
            return false;
    }
    bool isBalanced(TreeNode* root) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int height = 0;
        return helper(root, height);
    }
};
