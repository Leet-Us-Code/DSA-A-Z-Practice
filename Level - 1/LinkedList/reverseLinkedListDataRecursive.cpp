// { Driver Code Starts
//Initial Template for C++

// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


/* Function to get the middle of the linked list*/
struct Node *reverseList(struct Node *head);

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        head = reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
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
void reverselist(Node **head, Node *right, Node **left, int move, int size)
{
    if(right == NULL)
    return;
    reverselist(&(*head),right->next,&(*left),move+1,size);
    if(move >= (size/2))
    {
        int temp;
        temp = right->data;
        right->data = (*left)->data;
        (*left)->data = temp;
        (*left) = (*left)->next;
    }
}
Node* reverseList(Node* head) 
{ 
    if(head == NULL)
    return NULL;
    if(head->next == NULL)
    {
        return head;
    }
    Node *left = head;
    Node *right = head;
    int size = getSize(head);
    reverselist(&head,right,&left,0,size);
    return head;
} 
