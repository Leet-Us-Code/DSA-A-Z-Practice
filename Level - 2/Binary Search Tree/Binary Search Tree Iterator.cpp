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
class BSTIterator {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA , LAKSHMI NARAYANA, BHADRE NARAYANA
    stack<TreeNode *> st;
    void findLeft(TreeNode *root)
    {
        TreeNode *x = root;
        while(x != NULL)
        {
            st.push(x);
            x = x->left;
        }
    }
    BSTIterator(TreeNode* root) {
        findLeft(root);
    }
    
    int next() {
        TreeNode *cur = st.top();
        st.pop();
        if(cur->right != NULL)
            findLeft(cur->right);
        return cur->val;
    }
    
    bool hasNext() {
        if(st.empty())
            return false;
        else
            return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
