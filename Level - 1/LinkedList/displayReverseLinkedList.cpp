//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
//recursive solution
void displayReverse(Node *node)
{
    if(node == NULL)
    return;
    else
    {
        displayReverse(node->next);
        cout << node->data << " ";
    }
}
