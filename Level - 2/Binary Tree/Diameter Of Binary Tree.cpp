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
    int diameter(TreeNode* root, int &h)
    {
        if(root == NULL)
            return 0;
        int lh = 0, rh = 0;
        int ld = diameter(root->left, lh);
        int rd = diameter(root->right, rh);
        h = max(lh, rh) + 1;
        return max(lh+rh, max(ld, rd));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int h = 0;
        return diameter(root, h);
    }
};
