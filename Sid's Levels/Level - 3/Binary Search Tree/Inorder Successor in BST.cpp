class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if(x->right)
        {
            Node *cur = x->right;
            while(cur != NULL && cur->left != NULL)
            {
                cur = cur->left;
            }
            return cur;
        }
        else 
        {
            Node *temp = root;
            Node *sc = NULL;
            while(temp != NULL)
            {
                if(temp->data > x->data)
                {
                    sc = temp;
                    temp = temp->left;
                }
                else if(temp->data < x->data)
                {
                    temp = temp->right;
                }
                else
                {
                    break;
                }
            }
            return sc;
        }
    }
};
