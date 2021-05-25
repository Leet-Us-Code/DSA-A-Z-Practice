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
    void inorder(TreeNode *root, vector<int> &x)
    {
        if(root == NULL)
            return;
        inorder(root->left, x);
        x.push_back(root->val);
        inorder(root->right, x);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> in;
        inorder(root, in);
        int l = 0, r = in.size() - 1;
        while(r > l)
        {
            if(in[r] + in[l] == k)
                return true;
            else if(in[r] + in[l] > k)
                r--;
            else
                l++;
        }
        return false;
    }
};
