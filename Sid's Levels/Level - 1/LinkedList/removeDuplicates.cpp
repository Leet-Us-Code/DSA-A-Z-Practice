// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
 // your code goes here
 //OM GAN GANAPATHAYE NAMO NAMAH 
 //JAI SHRI RAM 
 //JAI BAJRANGBALI 
 //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    Node *temp = root, *temp2;
    if(root == NULL || root->next == NULL)
    return root;
    while(temp->next != NULL)
    {
        if(temp->data == temp->next->data)
        {
            temp2 = temp->next->next;
            free(temp->next);
            temp->next = temp2;
        }
        else
        {
            temp = temp->next;
        }
    }
    return root;
}
//Why is this not working??
//  if(root == NULL)
//  return NULL;
//  Node temp = root;
//  while(temp != NULL)
//  {
//      Node *temp1 = temp;
//      while(temp1 != NULL && temp->data == temp1->data)
//      {
//          temp1 = temp1->next;
//      }
//      temp->next = temp1;
//      temp = temp->next;
//  }
//  return root;
