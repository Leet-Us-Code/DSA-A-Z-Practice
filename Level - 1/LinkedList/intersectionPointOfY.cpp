// { Driver Code Starts
#include<iostream>
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int getSize(Node *head)
{
    Node *temp = head;
    if(head == NULL)
    return 0;
    if(head->next == NULL)
    return 1;
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
void intersect(Node *head1, int p1, Node *head2, int p2, int &x)
{
    if(head1 == NULL && head2 == NULL)
    {
        x = -1;
        return;
    }
    if(p1 > p2)
    {
        intersect(head1->next,p1-1,head2,p2,x);
    }
    else if(p2 > p1)
    {
        intersect(head1,p1,head2->next,p2-1,x);
    }
    else
    {
        intersect(head1->next,p1-1,head2->next,p2-1,x);
    }
    if(head1 != head2 && p1 == p2 && x == -1)
    {
        if((head1->next == NULL || head2->next == NULL) )
        {
            x = -1;
        }
        else
        {
            x = head1->next->data;
        }
    }
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int p1, p2, x = -1;
    p1 = getSize(head1);
    p2 = getSize(head2);
    Node *temp1 = head1, *temp2 = head2;
    intersect(temp1,p1,temp2,p2,x);
    return x;
}

