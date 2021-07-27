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
    bool validHelper(TreeNode *root, long long int min, long long int max)
    {
        if(root == NULL)
            return true;
        if(root->val > min && root->val < max)
        {
            bool ls = validHelper(root->left, min, root->val);
            bool rs = validHelper(root->right, root->val, max);
            if(ls && rs)
                return true;
            return false;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return validHelper(root, LONG_MIN, LONG_MAX);
    }
};
