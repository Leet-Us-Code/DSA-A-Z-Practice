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
//make an inorder function to store the values of inorder in an std::array ;
void inOrder(Node *root)
{
    if(root == NULL)
    return;
    else
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
void inorder(Node *root, vector<int> &arr)
{
    if(root == NULL)
    return;
    else
    {
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
}
//this function replaces each node's data with the sum of successor and predecessor of it's inorder traversal
void replace(Node *root, vector<int> arr, int &i)
{
    if(root == NULL)
    return;
    else
    {
        replace(root->left,arr,i);
        root->data = arr[i-1] + arr[i+1];
        i++;
        replace(root->right,arr,i);
    }
}
int main()
{
    //creation of a binary tree
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    inOrder(root);
    vector<int> arr;
    arr.push_back(0);
    inorder(root,arr);
    arr.push_back(0);
    cout << endl;
    int i = 1;
    replace(root,arr,i);
    inOrder(root);
    
}
