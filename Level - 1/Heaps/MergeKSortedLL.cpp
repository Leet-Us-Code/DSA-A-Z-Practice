// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

Node* mergeKLists(Node* arr[], int N);

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}

   		Node *res = mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
// } Driver Code Ends


/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
class comp {
    public:
    int operator()(Node *a, Node *b){
            return b->data<a->data;
        }
};
Node* mergeKLists(Node *arr[], int N)
{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    Node *merged = NULL;
    Node *head = merged;
    priority_queue<Node *, vector<Node*>, comp> p;
    for(int i = 0; i < N; i++)
    {
        if(arr[i])
        p.push(arr[i]);
    }
    Node *dummy = (Node *)malloc(sizeof(Node));
    Node *tail = dummy;
    while(!p.empty())
    {
        Node *x = p.top();
        int data = x->data;
        p.pop();
        if(x->next)
        {
            p.push(x->next);
        }
        tail->next = x;
        tail = tail->next;
    }
    return dummy->next;
}

// vector<int> Solution::solve(vector<vector<int> > &A) {
//     priority_queue<int, vector<int>, greater<int>> p;
//     for(int i = 0; i < A.size(); i++)
//     {
//         for(int j = 0; j < A[i].size(); j++)
//         {
//             p.push(A[i][j]);
//         }
//     }
//     vector<int> res;
//     while(!p.empty())
//     {
//         res.push_back(p.top());
//         p.pop();
//     }
//     return res;
// }
