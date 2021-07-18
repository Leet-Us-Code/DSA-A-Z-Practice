// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 

Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            if(indicator)
                head = insertAtEnd(head, data); 
            else
                head = insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends


/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// function inserts the data in front of the list
//OM GAN GANAPATAYE NAMO NAMAH
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
Node *insertAtBegining(Node *head, int newData) {
   // Your code here
   Node *newNode = new Node(newData);
   newNode->next=head;
   head=newNode;
   return head;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
   Node *start;
   start=head;
   Node *newNode = new Node(newData);
   if(head == NULL)
   {
       head=newNode;
       return head;
   }
   while(start->next!=NULL)
   {
       start=start->next;
   }
   newNode->next=NULL;
   start->next=newNode;
   return head;
}
