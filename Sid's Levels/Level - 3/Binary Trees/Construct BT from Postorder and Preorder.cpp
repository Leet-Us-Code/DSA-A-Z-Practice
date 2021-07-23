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
    TreeNode* construct(vector<int> pre, vector<int> post, int n, int l, int r, int &preInd)
    {
        if(preInd >= n)
            return NULL;
        if(r < l)
            return NULL;
        TreeNode *root = new TreeNode(pre[preInd]);
        preInd++;
        if(r == l)
            return root;
        int i;
        for(i = l; i <= r; i++)
        {
            if(post[i] == pre[preInd])
                break;
        }
        root->left = construct(pre, post, n, l, i, preInd);
        root->right = construct(pre, post, n, i+1, r-1, preInd);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n = post.size();
        int l = 0, r = n-1;
        int preInd = 0;
        return construct(pre, post, n, l, r, preInd);
    }
};
