// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    bool helper(Node *root, int &sum)
    {
        if(root == NULL)
            return true;
        if(root->left == NULL && root->right == NULL)
        {
            sum = root->data;
            return true;
        }
        int ls = 0, rs = 0;
        bool l = helper(root->left, ls);
        bool r = helper(root->right, rs);
        sum = ls + rs + root->data;
        if(l && r && ls + rs == root->data)
            return true;
        return false;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         //OM GAN GANAPATHAYE NAMO NAMAH 
         //JAI SHRI RAM 
         //JAI BAJRANGBALI 
         //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
         int sum = 0;
         return helper(root, sum);
    }
};
