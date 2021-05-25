// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
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
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
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
            currNode->left = new Node(stoi(currVal));
                
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
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

Node* LCA(Node * root , int l , int h);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
        int l , h;
		getline(cin,s);
		scanf("%d ",&l);
		scanf("%d ",&h);
        Node* root = buildTree(s);
        cout<<LCA(root ,  l ,  h)->data<<endl;
    }
    return 1;
}// } Driver Code Ends


/*The structure of a BST Node is as follows:

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
bool find(Node *root, int key, vector<Node*> &path)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->data == key)
    {
        path.push_back(root);
        return true;
    }
    else
    {
        bool left = find(root->left,key,path);
        if(left)
        {
            path.push_back(root);
            return true;
        }
        bool right = find(root->right,key,path);
        if(right)
        {
            path.push_back(root);
            return true;
        }
    }
}
// Returns the LCA of the nodes with values n1 and n2
// in the BST rooted at 'root' 
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   bool x1, x2;
   vector<Node*> path1,path2;
   x1 = find(root,n1,path1);
   x2 = find(root,n2,path2);
   if(x1 == false || x2 == false)
   return NULL;
   else
   {
       reverse(path1.begin(),path1.end());
       reverse(path2.begin(),path2.end());
       int i;
       for(i = 0; i < path1.size() && i < path2.size(); i++)
       {
           if(path1[i] != path2[i])
           break;
       }
       return path1[i-1];
   }
}
