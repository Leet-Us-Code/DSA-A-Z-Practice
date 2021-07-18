// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
void addFirst(Node **head, int x)
{
    Node *newNode = new Node(x);
    if(head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    newNode->next = *head;
    *head = newNode;
    
}
int addtwolists(Node *first, int p1, Node *second, int p2, Node **temp)
{
    if(first == NULL && second == NULL)
    {
        return 0; // this 0 is the carry
    }
    int oc = 0;//this is the old carry
    int data = 0;
    if(p1 > p2) // if the placevalue of the node in first is greater then we ll have to advance the first pointer
    {
        oc = addtwolists(first->next,p1-1,second,p2,&(*temp));
        data = first->data +oc;
    }
    else if(p1 < p2)
    {
        oc = addtwolists(first,p1,second->next,p2-1,&(*temp));
        data = second->data + oc;
    }
    else
    {
        //if they have equal place values then decrement both
        oc = addtwolists(first->next,p1-1,second->next,p2-1,&(*temp));
        data = first->data + second->data + oc;
    }
    int nc, nr;//stands for new carry and new result
    nr = data%10;
    nc = data/10;
    addFirst(&(*temp),nr);
    return nc;
}
int getSize(Node *head)
{
    int size = 0;
    if(head == NULL)
    return 0;
    if(head->next == NULL)
    return 1;
    Node *temp = head;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    Node *temp = NULL;
    int p1 = getSize(first);
    int p2 = getSize(second);
    int carry = addtwolists(first,p1,second,p2,&temp);
    if(carry != 0)
    {
        addFirst(&temp,carry);
    }
    return  temp;
}
