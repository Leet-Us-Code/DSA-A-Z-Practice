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
void printSingleChildNodes(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        if(root->left != NULL && root->right == NULL)
        cout << root->left->data << " ";
        if(root->right != NULL && root->left == NULL)
        cout << root->right->data << " ";
        printSingleChildNodes(root->left);
        printSingleChildNodes(root->right);
    }
}
int main()
{
    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    Node *root = new Node(50);
    root->left = new Node(25);
    root->right = new Node(75);
    root->left->left = new Node(12);
    root->left->right = new Node(37);
    root->left->right->left = new Node(30);
    root->right->left = new Node(62);
    root->right->left->left = new Node(60);
    printSingleChildNodes(root);
}
