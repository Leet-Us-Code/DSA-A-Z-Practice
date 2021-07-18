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
    void inOrder(TreeNode *root, vector<int> &x)
    {
        if(root == NULL)
            return;
        inOrder(root->left, x);
        x.push_back(root->val);
        inOrder(root->right, x);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        inOrder(root, inorder);
        return inorder[k-1];
    }
};
