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
//prints k nodes down and checks if we encounter the blocker node or not
void printKNodesDown(Node *root, int k, Node *blocker)
{
    if(root == NULL)
    return;
    if(k < 0)
    return;
    if(root == blocker)
    return;
    if(k == 0)
    {
        cout << root->data << " ";
        return;
    }
    else
    {
        printKNodesDown(root->left,k-1,blocker);
        printKNodesDown(root->right,k-1,blocker);
    }
}
//finds if the node exists and populates the vector with the nodes which lie in the path of the node to root
bool NodeToRoot(Node *root, Node *node, vector<Node*> &path)
{
    if(root == NULL)
    return  false;
    if(root == node)
    {
        path.push_back(root);
        return true;
    }
    bool findL = NodeToRoot(root->left, node, path);
    if(findL)
    {
        path.push_back(root);
        return  true;
    }
    bool findR = NodeToRoot(root->right, node, path);
    if(findR)
    {
        path.push_back(root);
        return true;
    }
    return false;
}
void kLevelsFar(Node *root, Node *node, int k)
{
    bool x;
    vector<Node*> path;
    x = NodeToRoot(root,node,path);
    if(x)
    {
        for(int i = 0; i < path.size(); i++)
        {
            Node *blocker;
            if(i == 0)
            blocker = NULL;
            else
            blocker = path[i-1]; // this is why we store the node , not the data -> else it later becomes tough to access the blocker node 
            printKNodesDown(path[i],k-i,blocker);
        }
        cout << endl;
    }
    else
    {
        cout << "Wrong" << endl;
        return;
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
    
    int k;
    cin >> k;
    vector<int> path;
    kLevelsFar(root,root->right,k);
    
}
