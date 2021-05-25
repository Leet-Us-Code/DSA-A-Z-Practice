// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// Tree Node
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
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int findDist(Node *, int, int);

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        int n1, n2;
        scanf("%d %d ", &n1, &n2);
        cout << findDist(root, n1, n2) << "\n";
    }
    return 0;
}// } Driver Code Ends


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/* Should return minimum distance between a and b
   in a tree with given root*/
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
    bool findL = find(root->left,x,path);
    if(findL)
    {
        path.push_back(root);
        return true;
    }
    bool findR = find(root->right,x,path);
    if(findR)
    {
        path.push_back(root);
        return true;
    }
    return false;
}
int findDist(Node* root, int a, int b) {
    // Your code here
    vector<Node*> path1, path2;
    bool find1 = find(root,a,path1);
    bool find2 = find(root,b,path2);
    if(find1 && find2)
    {
        int i = 0;
        reverse(path1.begin(),path1.end());
        reverse(path2.begin(),path2.end());
        int cnt = 0;
        for(i = 0; i < path1.size() && i < path2.size(); i++)
        {
            if(path1[i] != path2[i])
            break;
        }
        cnt = (path2.size()-i)+(path1.size()-i);
        return cnt;
    }
    else
    {
        
        return -1;
    }
}
