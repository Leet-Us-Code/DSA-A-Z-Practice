#include<iostream>
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

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
Node* sortedMerge(Node *headA, Node *headB)
{
    //OM GAN GANAPATHAAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    Node *dummy = new Node(0);
    Node *result;
    result = dummy;
    Node *tempA = headA;
    Node *tempB = headB;
    while(tempA != NULL && tempB != NULL)
    {
        if(tempA->data > tempB->data)
        {
            result->next = tempB;
            tempB = tempB->next;
        }
        else
        {
            result->next = tempA;
            tempA = tempA->next;
        }
        result = result->next;
    }
    if(tempA)
    result->next = tempA;
    if(tempB)
    result->next = tempB;
    return dummy->next;
    
}
/*Node* sortedMerge(Node *a, Node *b)  
{  
    Node* result = NULL;  
      
    /* Base cases */
    /*if (a == NULL)  
        return(b);  
    else if (b == NULL)  
        return(a);*/  
      
    /* Pick either a or b, and recur */
    /*if (a->data <= b->data)  
    {  
        result = a;  
        result->next = sortedMerge(a->next, b);  
    }  
    else
    {  
        result = b;  
        result->next = sortedMerge(a, b->next);  
    }  
    return(result);  
} */
