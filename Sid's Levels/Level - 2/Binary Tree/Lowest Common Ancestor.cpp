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
    bool nodeToRoot(TreeNode* root, vector<TreeNode*> &path, TreeNode *x)
    {
        if(root == NULL)
            return false;
        if(root == x)
        {
            path.push_back(root);
            return true;
        }
        bool l = nodeToRoot(root->left, path, x);
        if(l)
        {
            path.push_back(root);
            return true;
        }
        bool r = nodeToRoot(root->right, path, x);
        if(r)
        {
            path.push_back(root);
            return true;
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1, path2;
        bool e1 = nodeToRoot(root, path1, p);
        bool e2 = nodeToRoot(root, path2, q);
        int i = 0, j = 0;
        reverse(path1.begin(), path1.end());
        reverse(path2.begin(), path2.end());
        while(i < path1.size() && j < path2.size())
        {
            if(path1[i] == path2[j])
            {
                i++;
                j++;
            }
            else
                break;
        }
        return path1[i-1];
    }
};
