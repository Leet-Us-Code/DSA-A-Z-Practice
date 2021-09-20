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
    TreeNode *helper(int &preInd, int l, int r, vector<int> preorder, vector<int> inorder)
    {
        
        if(preInd >= preorder.size() || l > r) // put base cases before 
            return NULL;
        TreeNode *root = new TreeNode(preorder[preInd]);
        preInd = preInd + 1;
        if(l == r)
            return root;
        int found;
        for(int i = l; i <= r; i++)
        {
            if(inorder[i] == root->val)
            {
                found = i;
                break;
            }
        }
        root->left = helper(preInd, l, found-1, preorder, inorder);
        root->right = helper(preInd, found+1, r, preorder, inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int preInd = 0;
        int l = 0, r = inorder.size() - 1;
        return helper(preInd, l, r, preorder, inorder);
    }
};
