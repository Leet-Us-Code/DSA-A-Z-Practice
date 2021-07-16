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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL); // NULL indicates ending of a level 
        vector<vector<int>> res;
        if(root == NULL)
            return res;
        vector<int> temp;
        while(!q.empty())
        {
            TreeNode *u = q.front();
            q.pop();
            if(u == NULL)
            {
                if(!q.empty())
                    q.push(NULL);
                res.push_back(temp);
                temp.clear();
            }
            else
            {
                temp.push_back(u->val);
                if(u->left)
                    q.push(u->left);
                if(u->right)
                    q.push(u->right);
            }
        }
        return res;
    }
};
