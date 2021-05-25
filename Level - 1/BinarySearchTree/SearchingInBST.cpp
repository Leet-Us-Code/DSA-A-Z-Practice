Node *search(Node *root, int key)
{
    if(root == NULL || root->data == key)
    return root;
    else
    {
        if(root->data > key)
        search(root->left, key);
        else
        search(root->right, key);
    }
}
