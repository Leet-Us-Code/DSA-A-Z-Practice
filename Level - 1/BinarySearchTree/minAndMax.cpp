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
int minEle(Node *root)
{
    if(root == NULL)
    return -1;
    int min = 1000000;
    Node *temp = root;
    while(temp->left != NULL)
    {
        if(min > temp->data)
        min = temp->data;
        temp = temp->left;
    }
    if(min > temp->data)
        min = temp->data;
    return min;
}
int maxEle(Node *root)
{
    if(root == NULL)
    return -1;
    int max = -1;
    Node *temp = root;
    while(temp->right != NULL)
    {
        if(max < temp->data)
        max = temp->data;
        temp = temp->right;
    }
    if(max < temp->data)
        max = temp->data;
    return max;
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
    int max = maxEle(root);
    int min = minEle(root);
    cout << max << " " << min <<endl;
}
