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
    void flatten(TreeNode* root) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return;
        if(root->left != NULL)
        {
            flatten(root->left);
            TreeNode *temp = root->right;
            root->right = root->left;
            root->left = NULL;
            TreeNode *cur = root->right;
            while(cur->right != NULL)
            {
                cur = cur->right;
            }
            cur->right = temp;
            
        }
        flatten(root->right);
    }
};
