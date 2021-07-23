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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return NULL;
        if(root->val == val)
            return root;
        if(val < root->val)
        {
            return searchBST(root->left, val);
        }
        else
        {
            return searchBST(root->right, val);
        }
    }
};
