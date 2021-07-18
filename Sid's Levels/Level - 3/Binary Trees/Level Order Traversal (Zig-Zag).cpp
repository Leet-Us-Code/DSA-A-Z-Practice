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
    void rightToLeft(TreeNode *root, vector<int> &res, int level)
    {
        if(root == NULL)
            return;
        if(level == 0)
        {
            res.push_back(root->val);
            return;
        }
        rightToLeft(root->right, res, level-1);
        rightToLeft(root->left, res, level-1);
    }
    void leftToRight(TreeNode *root, vector<int> &res, int level)
    {
        if(root == NULL)
            return;
        if(level == 0)
        {
            res.push_back(root->val);
            return;
        }
        leftToRight(root->left, res, level-1);
        leftToRight(root->right, res, level-1);
    }
    int getHeight(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        return max(lh, rh) + 1;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int h = getHeight(root);
        vector<vector<int>> res;
        for(int i = 0; i < h; i++)
        {
            if(i%2 == 0)
            {
                vector<int> x;
                leftToRight(root, x, i);
                res.push_back(x);
            }
            else
            {
                vector<int> x;
                rightToLeft(root, x, i);
                res.push_back(x);
            }
        }
        return res;
    }
};
