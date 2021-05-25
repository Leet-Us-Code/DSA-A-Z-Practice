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
Node *cloneBinaryTree(Node *root)
{
    if(root == NULL)
    {
        return NULL;
    }
    Node *leftClonedTree = cloneBinaryTree(root->left); // clone the left part first 
    Node *rightClonedTree = cloneBinaryTree(root->right);//clone right part after that 
    Node *temp = new Node(root->data); // new node 
    root->right = rightClonedTree;
    root->left = temp;
    temp->left = leftClonedTree;
    return root;
}
void transformBack(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    root->left = root->left->left;
    transformBack(root->left);
    transformBack(root->right);
}
//summeet sir's solution 
Node *transformBackS(Node *root)
{
    if(root == NULL)
    return NULL;
    else
    {
        Node *transformedL = transformBackS(root->left->left);
        Node *transformedR = transformBackS(root->right);
        root->left = transformedL;
        root->right = transformedR;
        return root;
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
    inorder(root);
    cout << endl;
    Node *clonedTree = cloneBinaryTree(root);
    Node *clonedTree1 = cloneBinaryTree(root);
    inorder(clonedTree);
    cout << endl;
    transformBack(clonedTree);
    inorder(clonedTree);
    Node *reverseTransform = transformBackS(clonedTree1);
    cout << endl;
    inorder(reverseTransform);
}
