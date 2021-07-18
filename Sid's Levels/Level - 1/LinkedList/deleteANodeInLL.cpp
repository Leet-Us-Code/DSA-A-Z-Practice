// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
struct Node* deleteNode(struct Node *head,int );

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}

/* Driver program to test above function*/
int main()
{
  int T, i, n, l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

	int kk;
	cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    }
    return 0;
}
// } Driver Code Ends


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
int getSize(Node *head)
{
    if(head == NULL)
    return 0;
    int size = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
Node* getAtInd(Node *head, int ind)
{
    if(head == NULL)
    return NULL;
    int size = getSize(head);
    if(ind < 0 || ind >= size)
    return NULL;
    Node *temp = head;
    for(int i = 0; i < ind; i++)
    {
        temp = temp->next;
    }
    return temp;
}
Node* deleteNode(Node *head,int x)
{
    if(x == 1)
    {
        Node *temp;
        temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    if(head == NULL)
    return NULL;
    int size = getSize(head);
    if(x-1 < 0 || x-1 >= size)
    return NULL;
    Node *temp;
    temp = getAtInd(head,x-1);
    Node *temp1;
    temp1 = getAtInd(head,x-2);
    if(temp->next == NULL)
    {
        temp1->next = NULL;
        delete(temp);
        return head;
    }
    Node *temp2;
    temp2 = getAtInd(head,x);
    temp1->next = temp2;
    delete(temp);
    return head;
}
