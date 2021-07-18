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
    //OM NAMO NARAYANAYA
    int getHeight(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        int height = max(lh, rh) + 1;
        return height;
    }
    void levelHelper(TreeNode *root, int level, vector<int> &x)
    {
        if(root == NULL)
            return;
        if(level == 0)
        {
            x.push_back(root->val);
            return;
        }
        levelHelper(root->left, level-1, x);
        levelHelper(root->right, level-1, x);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int height = getHeight(root);
        vector<vector<int>> res;
        for(int i = 0; i < height; i++)
        {
            vector<int> x;
            levelHelper(root, i, x);
            res.push_back(x);
            x.clear();
        }
        return res;
    }
};
