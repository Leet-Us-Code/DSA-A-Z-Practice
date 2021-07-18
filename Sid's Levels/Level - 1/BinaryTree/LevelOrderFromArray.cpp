#include <bits/stdc++.h> 
using namespace std; 

/* A binary tree node has data, 
pointer to left child and a 
pointer to right child */
struct Node 
{ 
	int data; 
	Node* left, * right; 
}; 

/* Helper function that allocates a 
new node */
Node* newNode(int data) 
{ 
	Node* node = (Node*)malloc(sizeof(Node)); 
	node->data = data; 
	node->left = node->right = NULL; 
	return (node); 
} 

// Function to insert nodes in level order 
Node* insertLevelOrder(int arr[], Node* root, 
					int i, int n) 
{ 
	if(i >= n)
      return root;
  	else
    {
      Node *temp = newNode(arr[i]);
      root = temp;
      root->left = insertLevelOrder(arr,root->left,2*i+1,n);
      root->right = insertLevelOrder(arr,root->right,2*i+2,n);
    }
} 

// Function to print tree nodes in 
// InOrder fashion 
void inOrder(Node* root) 
{ 
	if (root != NULL) 
	{ 
		inOrder(root->left); 
		cout << root->data <<" "; 
		inOrder(root->right); 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 6, 6, 6 }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	Node* root = insertLevelOrder(arr, root, 0, n); 
	inOrder(root); 
} 
