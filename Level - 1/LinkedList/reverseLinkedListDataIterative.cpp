// { Driver Code Starts
//Initial Template for C++

// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI  RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA   
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
int getSize(Node *head)
{
    if(head == NULL) 
    return 0;
    Node *temp = head;
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
int getAtInd(Node *head, int ind)
{
    int size = getSize(head);
    if(size == 0)
    return -1;
    if(ind < 0 || ind >= size)
    return -1;
    Node *temp = head;
    int c = 0;
    while(c < ind)
    {
        temp = temp->next;
        c++;
    }
    return temp->data;
}
void reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    int r = getSize(head)-1;
    while(r >= 0)
    {
        int data;
        data = getAtInd(head,r);
        cout << data << " ";
        r--;
    }
}
/* Function to get the middle of the linked list*/


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
        
        reverseList(head);
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


