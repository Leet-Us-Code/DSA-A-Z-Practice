//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
//Add a node at the starting of the linked list 
void addAtStart(Node **head, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;//this is why head is passed by reference
}
void addAfterNode(Node **prev_node, int data)
{
    if(prev_node == NULL)
    {
        cout << "Cant be done!!" << endl;
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = (*prev_node)->next;
    (*prev_node)->next = newNode;
}
void addAtEnd(Node **head, int data)
{
    Node *newNode;
    newNode = new Node();
    newNode->data = data;
    if(*head == NULL)
    {
        *head = newNode;//this is why head is passed by reference
        return;
    }
    newNode->next = NULL;
    Node *last = *head;
    while((last)->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}
void printList(Node *h)
{
    //not passed by reference as we need not change the value of head in this program
    while(h != NULL)
    {
        cout << h->data << " ";
        h = h->next;
    }
}
int main()
{
    Node *head = NULL;
    cout << "Insert 50 at the beginning of the linked list" << endl;
    addAtStart(&head,50);
    printList(head);
    cout << endl;
    cout << "Insert 70 at the beginning of the linked list" << endl;
    addAtStart(&head,70);
    printList(head);
    cout << endl;
    cout << "Add 80 after the next of head of the linked list" << endl;
    addAfterNode(&(head->next),80);
    printList(head);
    cout << endl;
    cout << "Add 60 at the end of the linked list" << endl;
    addAtEnd(&head,60);
    printList(head);
    return 0;
}
