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
    int heightOfTree(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        else
        {
            return max(1+heightOfTree(root->left), 1+heightOfTree(root->right));
        }
    }
    int helper(TreeNode *root, int curLevel, int height)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(curLevel == height-1)
        {
            return root->val;
        }
        return helper(root->left, curLevel+1, height)+helper(root->right, curLevel+1, height);
    }
    int deepestLeavesSum(TreeNode* root) {
        int height = heightOfTree(root);
        return helper(root, 0, height);
    }
};
