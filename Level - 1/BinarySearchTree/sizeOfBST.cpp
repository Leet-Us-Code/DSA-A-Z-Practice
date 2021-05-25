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
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI  RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
int sizeOf(Node *root)
{
    if(root == NULL)
    return 0;
    else
    {
        int ls = sizeOf(root->left);//no.of nodes in left subtree
        int rs = sizeOf(root->right);//no.of nodes in right subtree 
        return (ls+rs+1);
    }
}
int main()
{
    //creation of a binary search tree
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    int size = sizeOf(root);
    cout << size << " ";
}
