// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}
// } Driver Code Ends


/* Following is the Linked list node structure */

/*
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
void reorder(Node **head,Node *right, Node **left, int move, int size)
{
    if(right == NULL)
    return;
    else
    {
        reorder(&(*head),right->next,&(*left),move+1,size);
        if(move > (size)/2)
        {
            Node *temp = (*left)->next;
            (*left)->next = right;
            right->next = temp;
            (*left) = temp;
        }
        else if(move == (size)/2)
        {
            (right)->next = NULL;
        }
    }
}
int getSize(Node *head)
{
    if(head == NULL)
    return 0;
    if(head->next == NULL)
    return 1;
    Node *temp = head;
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
void reorderList(Node* head) {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    if(head == NULL || head->next == NULL)
    return;
    Node *left = head;
    Node *right = head;
    Node *temp = head;
    int size = getSize(head);
    reorder(&head,right,&left,0,size);
}
