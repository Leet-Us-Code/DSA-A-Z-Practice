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
bool NodeToRoot(Node *root, int val, vector<int> &path)
{
    if(root == NULL)
    return  false;
    if(root->data == val)
    {
        path.push_back(root->data);
        return true;
    }
    bool findL = NodeToRoot(root->left, val, path);
    if(findL)
    {
        path.push_back(root->data);
        return  true;
    }
    bool findR = NodeToRoot(root->right, val, path);
    if(findR)
    {
        path.push_back(root->data);
        return true;
    }
    return false;
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
    int x;
    cin >> x;
    vector<int> path;
    bool res = NodeToRoot(root,x,path);
    if(res)
    {
        for(int i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No path" << endl;
    }
    
}
