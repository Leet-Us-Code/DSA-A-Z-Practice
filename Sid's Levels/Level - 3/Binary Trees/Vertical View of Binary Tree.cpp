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
    int sizeOfBT(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int leftSize = sizeOfBT(root->left);
        int rightSize = sizeOfBT(root->right);
        return leftSize + rightSize + 1;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int n = sizeOfBT(root);
        unordered_map<int, vector<int>> mp;
        queue<TreeNode*> q1;
        queue<int> q2;
        q1.push(root);
        q2.push(0);
        while(!q1.empty() && !q2.empty())
        {
            TreeNode *top = q1.front();
            int dist = q2.front();
            q1.pop();
            q2.pop();
            mp[n-dist].push_back(top->val);
            if(top->left)
            {
                q1.push(top->left);
                q2.push(dist-1);
            }
            if(top->right)
            {
                q1.push(top->right);
                q2.push(dist+1);
            }
        }
        vector<vector<int>> res;
        for(int i = 0; i <= 2*n; i++)
        {
            if(mp[i].size() != 0){
                sort(mp[i].begin(), mp[i].end());
                res.push_back(mp[i]);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
