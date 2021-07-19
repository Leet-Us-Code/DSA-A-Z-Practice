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
    int diameterHelper(TreeNode *root, int &height)
    {
        if(root == NULL)
            return 0;
        int lh = 0, rh = 0;
        int ld = diameterHelper(root->left, lh); // left diameter calculation which updates the left subtree height also 
        int rd = diameterHelper(root->right, rh); // same for the right subtree
        //update the height  
        height = max(lh, rh) + 1;
        return max({ld, rd, lh + rh});
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int height = 0;
        return diameterHelper(root, height);
    }
};
