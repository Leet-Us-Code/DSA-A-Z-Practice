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

vector<int> printNearNodes(Node*root,int k1 , int k2);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        int k1 , k2;
        string s;
		getline(cin,s);
		scanf("%d ", &k1);
		scanf("%d " , &k2);
        Node* root = buildTree(s);
        vector <int> res = printNearNodes(root, k1 ,  k2);
        for (int i=0;i<res.size();i++) cout << res[i] << " ";
        cout<<endl;
    }
    return 1;
}// } Driver Code Ends


/* The structure of a BST Node is as follows:

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

// returns an array of node values in the BST (rooted at 'root')
// that lie in the given range [low, high]
void helper(Node *root, int low, int high, vector<int> &res)
{
    if(root == NULL)
    return;
    else
    {
        if(root->data >= low && root->data <= high)
        {
            helper(root->left,low,high,res);
            res.push_back(root->data);
            helper(root->right,low,high,res);
        }
        else if(root->data < low)
        {
            helper(root->right,low,high,res);
        }
        else if(root->data > high)
        {
            helper(root->left,low,high,res);
        }
    }
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here   
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  vector<int> res;
  helper(root,low,high,res);
  return res;
}
