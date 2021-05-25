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
    int camera = 0;
    set<TreeNode*> s;//contains nodes which are monitored
    void DepthFirstSearch(TreeNode *root, TreeNode *parent)
    {
        if(root != NULL)
        {
            DepthFirstSearch(root->left, root);
            DepthFirstSearch(root->right, root);
            //ideal situation to place camera
            if(parent == NULL && s.find(root) == s.end() || s.find(root->left) == s.end() || s.find(root->right) == s.end())
            {
                camera++;
                s.insert(parent);
                s.insert(root);
                s.insert(root->left);
                s.insert(root->right);
            }
        }
    }
    int minCameraCover(TreeNode* root) {
        if(root == NULL)
            return 0;
        s.insert(NULL);
        DepthFirstSearch(root, NULL);
        return camera;
    }
    
};
