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
    //AMME NARAYANA, DEVI NARAYANA, LAKSMHI NARAYANA, BHADRE NARAYANA
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode *cur = root;
        while(!s.empty() || cur != NULL)
        {
            while(cur != NULL)
            {
                s.push(cur);
                cur = cur->left;
            }
            if(s.top()->right != NULL)
                cur = s.top()->right;
            res.push_back(s.top()->val);
            s.pop();
            
        }
        return res;
    }
};
