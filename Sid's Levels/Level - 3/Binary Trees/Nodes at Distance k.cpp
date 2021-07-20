/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool nodeToRoot(TreeNode *root, TreeNode *tar, vector<TreeNode*> &res)
    {
        if(root == NULL)
            return false;
        if(root == tar)
        {
            res.push_back(root);
            return true;
        }
        bool findLeft = nodeToRoot(root->left, tar, res);
        if(findLeft)
        {
            res.push_back(root);
            return true;
        }
        bool findRight = nodeToRoot(root->right, tar, res);
        if(findRight)
        {
            res.push_back(root);
            return true;
        }
        return false;
    }
    void levelsDown(TreeNode *node, TreeNode *blocker, int k, vector<int> &res)
    {
        if(node == NULL || k < 0 || node == blocker)
            return;
        if(k == 0)
        {
            res.push_back(node->val);
            return;
        }
        levelsDown(node->left, blocker, k-1, res);
        levelsDown(node->right, blocker, k-1, res);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> res;
        vector<TreeNode*> x1;
        bool x = nodeToRoot(root, target, x1);
        TreeNode *blocker = NULL;
        for(int i = 0; i < x1.size(); i++)
        {
            levelsDown(x1[i], blocker, k-i, res);
            blocker = x1[i];
        }
        return res;
    }
};
