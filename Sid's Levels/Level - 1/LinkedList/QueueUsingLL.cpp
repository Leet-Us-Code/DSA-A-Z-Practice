// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }
// } Driver Code Ends


/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    QueueNode *newNode = new QueueNode(x);
    if(front == NULL)
    {
        front = newNode;
        rear = newNode;
        return;
    }
    if(front->next == NULL)
    {
        front->next = newNode;
        rear = newNode;
        return;
    }
    while(rear->next != NULL)
    rear = rear->next;
    rear->next = newNode;
    newNode->next = NULL;
    rear = newNode;
    return;
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front == NULL)
    {
        return -1;
    }
    if(front->next == NULL)
    {
        int x;
        x = front->data;
        delete(front);
        rear = NULL;
        front = NULL;
        return x;
    }
    int x;
    x = front->data;
    QueueNode *temp = front->next;
    delete(front);
    front = temp;
    return x;
}
