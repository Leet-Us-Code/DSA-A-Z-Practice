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
    int tiltHelper(TreeNode *root, int &sum)
    {
        if(root == NULL)
        {
            sum = 0;
            return 0;
        }
        int ls = 0, rs = 0;
        int lTilt = tiltHelper(root->left, ls);
        int rTilt = tiltHelper(root->right, rs);
        int tilt = 0;
        sum = root->val + ls + rs;
        tilt = abs(ls-rs) + rTilt + lTilt;
        return tilt;
    }
    int findTilt(TreeNode* root) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int sum = 0, tilt = 0;;
        return tiltHelper(root, sum);
    }
};
