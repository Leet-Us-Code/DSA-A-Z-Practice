//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void removeLeaf(Node *root, Node *parent)
{
    if(root == NULL)
    return;
    else 
    {
        if(root->right == NULL && root->left == NULL)
        {
            if(parent->left == root)
            parent->left = NULL;
            if(parent->right == root)
            parent->right = NULL;
        }
        removeLeaf(root->left,root);
        removeLeaf(root->right,root);
    }
}
void inorder(Node *root)
{
    if(root == NULL)
    return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // Node *root = new Node(50);
    // root->left = new Node(25);
    // root->right = new Node(75);
    // root->left->left = new Node(12);
    // root->left->right = new Node(37);
    // root->left->right->left = new Node(30);
    // root->right->left = new Node(62);
    // root->right->left->left = new Node(60);
    inorder(root);
    removeLeaf(root,NULL);
    cout << endl;
    inorder(root);
}
