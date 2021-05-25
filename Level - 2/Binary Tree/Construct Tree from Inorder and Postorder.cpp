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
    TreeNode* build(vector<int> preorder, vector<int> inorder, int &preInd, int l, int r)
    {
        if(preInd >= preorder.size() || l > r)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(preorder[preInd]);
        preInd++;
        if(l == r)
            return root;
        int i;
        for(i = l; i <= r; i++)
        {
            if(inorder[i] == root->val)
                break;
        }
        root->left = build(preorder, inorder, preInd, l, i-1);
        root->right = build(preorder, inorder, preInd, i+1, r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int preInd = 0;
        int l = 0;
        int r = inorder.size() - 1;
        return build(preorder, inorder, preInd, l, r);
    }
};
