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
    void rightViewHelper(TreeNode *root, int level, int &maxLevel, vector<int> &res)
    {
        if(root == NULL)
            return;
        if(level > maxLevel)
        {
            res.push_back(root->val);
            maxLevel = level;
        }
        rightViewHelper(root->right, level+1, maxLevel, res);
        rightViewHelper(root->left, level+1, maxLevel, res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        int level = 0, maxLevel = INT_MIN;
        rightViewHelper(root, level, maxLevel, res);
        return res;
    }
};
