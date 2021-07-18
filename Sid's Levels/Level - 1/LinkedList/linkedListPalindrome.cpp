// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool ispalindrome(Node **head, Node *right, Node **left)
{
    if(right == NULL)
    return true;
    else
    {
        bool res = ispalindrome(&(*head),right->next,&(*left));
        if(res == false)
        {
            return false;
        }
        else if((*left)->data != right->data)
        {
            return false;
        }
        else
        {
            (*left) = (*left)->next;
            return true;
        }
    }
}
bool isPalindrome(Node *head)
{
    //Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    if(head == NULL || head->next == NULL)
    return true;
    Node *left = head;
    Node *right = head;
    int x = 1;
    if(ispalindrome(&head,right,&left))
    return true;
    else
    return false;
}

