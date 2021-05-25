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
int tiltSum(Node *root, int &tilt)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int tiltLeft = tiltSum(root->left, tilt);
        int tiltRight = tiltSum(root->right, tilt);
        tilt += abs(tiltLeft - tiltRight);
        int res = tiltLeft + tiltRight + root->data;
        return res;
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
    int x = 0;
    int res = tiltSum(root, x);
    cout << x << endl;
}
