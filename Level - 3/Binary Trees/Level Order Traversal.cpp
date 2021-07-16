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
    int getHeight(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        return max(lh, rh) + 1;
    }
    void levelOrder(TreeNode *root, int level, vector<int> &res)
    {
        if(root == NULL)
            return;
        if(level == 0)
        {
            res.push_back(root->val);
            return;
        }
        
        levelOrder(root->left, level-1, res);
        levelOrder(root->right, level-1, res);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        int h = getHeight(root);
        for(int i = 0; i < h; i++)
        {
            vector<int> temp;
            levelOrder(root, i, temp);
            res.push_back(temp);
        }
        return res;
    }
};
