//just a pseudocode -> question not available for practice
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Pair{
    public: 
    int inc; // sum including the current root of the current subtree 
    int exc; // sum excluding the current root of the current subtree
};
Pair maxSumPath(TreeNode *root)
{
    Pair p;
    if(root == NULL)
    {
        //base case -> sum will be zero 
        p.inc = 0;
        p.exc = 0;
        return p;
    }
    //recursively call the left and right subtrees 
    Pair l = maxSumPath(root->left);
    Pair r = maxSumPath(root->right);
    p.inc = root->data + l.exc + r.exc; // if root is included then the root of the left and right subtrees cant be included 
    p.exc = max(l.exc, l.inc) + max(r.inc, r.exc); // if root is excluded then we have choice of choosing the roots of the left and right subtrees 
    return p; // at the end when we want the max path sum -> return max(p.inc, p.exc);
    
}

