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
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
void levelOrderLtoR(Node *root, int level)
{
    if(root == NULL)
    {
        return;
    }
    if(level == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        levelOrderLtoR(root->left,level-1);
        levelOrderLtoR(root->right,level-1);
    }
}
void levelOrderRtoL(Node *root, int level)
{
    if(root == NULL)
    {
        return;
    }
    if(level == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        levelOrderRtoL(root->right,level-1);
        levelOrderRtoL(root->left,level-1);
    }
}
int getHeight(Node *root)
{
    if(root == NULL)
    return -1;
    else
    {
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);
        return max(lh,rh)+1;
    }
}
void printZigZag(Node *root)
{
    int height = getHeight(root);
    for(int i = 0; i <= height; i++)
    {
        if(i%2 == 0)
        levelOrderLtoR(root,i);
        else
        levelOrderRtoL(root,i);
    }
    
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
    printZigZag(root);
}
