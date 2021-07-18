// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node * lca(Node* root,int n1,int n2);
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // for(string i:ip)
    //     cout<<i<<" ";
    // cout<<endl;
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// Function for Inorder Traversal
void printInorder(Node* root)
{
    if(!root)
        return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d ",&a,&b);
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        cout<<lca(root,a,b)->data<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
bool find(Node *root, int x, vector<Node*> &path)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->data == x)
    {
        path.push_back(root);
        return true;
    }
    bool findLeft = find(root->left,x,path);
    if(findLeft)
    {
        path.push_back(root);
        return true;
    }
    bool findRight = find(root->right,x,path);
    if(findRight)
    {
        path.push_back(root);
        return true;
    }
    return false;
}
Node* lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   if(root == NULL)
   return NULL;
   vector<Node*> path1, path2;
   bool findFirst = find(root,n1,path1);
   bool findSecond = find(root,n2,path2);
   reverse(path1.begin(),path1.end());
   reverse(path2.begin(),path2.end());
   if(findFirst && findSecond)
   {
       int i = 0;
       //since this path is from root to node where both of them arent equal the node 
       //before that is the answer
       for(i = 0; i < path1.size() && i < path2.size(); i++)
       {
           if(path1[i] != path2[i])
           break;
       }
       return path1[i-1];
   }
   else
   {
       return NULL;
   }
}
