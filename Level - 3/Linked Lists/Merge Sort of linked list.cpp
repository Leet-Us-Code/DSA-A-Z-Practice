class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    Node *merge(Node *head1, Node *head2)
    {
        Node *head3 = new Node(0);
        Node *res = head3;
        Node *a = head1, *b = head2;
        while(a != NULL && b != NULL)
        {
            if(a->data > b->data)
            {
                res->next = new Node(b->data);
                b = b->next;
            }
            else
            {
                res->next = new Node(a->data);
                a = a->next;
            }
            res = res->next;
        }
        while(a)
        {
            res->next = new Node(a->data);
            res = res->next;
            a = a->next;
        }
        while(b)
        {
            res->next = new Node(b->data);
            res = res->next;
            b = b->next;
        }
        return head3->next;
    }
    void split(Node *head, Node **a, Node **b)
    {
        if(head == NULL)
        return;
        Node *slow = head;
        Node *fast = head->next;//if fast and slow are given same segmentation fault is arising
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        *b = slow->next;
        slow->next = NULL;
        *a = head;
    }
    void mergeSortHelper(Node **head)
    {
        if((*head) == NULL || (*head)->next == NULL)
            return;
        Node *a, *b;
        split((*head), &a, &b);
        mergeSortHelper(&a);
        mergeSortHelper(&b);
        *head = merge(a, b);
    }
    Node* mergeSort(Node* head) {
        // your code here
        mergeSortHelper(&head);
        return head;
    }
};
