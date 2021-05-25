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
    TreeNode* helper(vector<int> preorder, int &i, int key, int min, int max)
    {
        if(i >= preorder.size())
            return NULL;
        else
        {
            TreeNode* root = NULL;
            if(key > min && key < max)
            {
                root = new TreeNode(key);
                i = i + 1;
                if(i < preorder.size())
                {
                    root->left = helper(preorder,i,preorder[i],min,root->val);
                }
                if(i < preorder.size())
                {
                    root->right = helper(preorder,i,preorder[i],root->val,max);
                }
            }
            return root;
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int min = INT_MIN;
        int max = INT_MAX;
        int ind = 0;
        int key = preorder[0];
        TreeNode* root = helper(preorder, ind, key, min, max);
        return root;
    }
};
