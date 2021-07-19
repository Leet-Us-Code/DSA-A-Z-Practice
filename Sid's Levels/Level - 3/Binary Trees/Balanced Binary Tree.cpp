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
    bool helper(TreeNode *root, int &height)
    {
        if(root == NULL)
        {
            return true;
        }
        int lh = 0, rh = 0;
        bool leftB = helper(root->left, lh);
        bool rightB = helper(root->right, rh);
        height = max(lh, rh) + 1;
        if(leftB && rightB && abs(lh-rh) <= 1)
            return true;
        return false;
    }
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return helper(root, height);
    }
};
