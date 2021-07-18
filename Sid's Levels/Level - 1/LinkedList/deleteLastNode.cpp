//OM GAN GANAPATHAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include <bits/stdc++.h> 
using namespace std; 
  
/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
/* Function to remove the last node   
   of the linked list */
Node* removeLastNode(struct Node* head) 
{ 
    if(head == NULL)
    return NULL;
    if(head->next == NULL)
    {
        delete(head);
        return NULL;
    }
    Node *secondLast = head;
    Node *last = head;
    while(last->next != NULL)
    {
        secondLast = last;
        last = last->next;
    }
    secondLast->next = NULL;
    delete(last);
    return head;
} 
  
// Function to push node at head 
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = new Node; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
// Driver code 
int main() 
{
    Node* head = NULL; 
    push(&head, 12); 
    push(&head, 29); 
    push(&head, 11); 
    push(&head, 23); 
    push(&head, 8); 
  
    head = removeLastNode(head); 
    for (Node* temp = head; temp != NULL; temp = temp->next) 
        cout << temp->data << " "; 
  
    return 0; 
} 
