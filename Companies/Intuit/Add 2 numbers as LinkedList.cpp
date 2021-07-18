// Hari

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

class Solution
{
public:
    int sizehelper(struct Node *curr)
    {
        int sz = 0;

        while (curr != nullptr)
        {
            sz++;
            curr = curr->next;
        }
        return sz;
    }

    struct Node *reverseLL(struct Node *curr)
    {
        struct Node *prev = nullptr;
        struct Node *next = curr;
        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    //Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        first = reverseLL(first);
        second = reverseLL(second);

        Node *curr1 = first;
        Node *curr2 = second;
        int carry = 0;
        Node *res = new Node(0);
        Node *res1 = res; // return res1

        while (curr1 != nullptr && curr2 != nullptr)
        {
            int sum = curr1->data + curr2->data + carry;
            res->next = new Node(sum % 10);
            carry = sum / 10;
            res = res->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        while (curr1 != nullptr)
        {
            // no more curr2
            int sum = curr1->data + carry;
            res->next = new Node(sum % 10);
            carry = sum / 10;
            curr1 = curr1->next;
            res = res->next;
        }

        while (curr2 != nullptr)
        {
            // no more curr1
            int sum = curr2->data + carry;
            res->next = new Node(sum % 10);
            carry = sum / 10;
            curr2 = curr2->next;
            res = res->next;
        }

        if (carry)
        {
            res->next = new Node(carry);
        }

        return reverseLL(res1->next);
    }
};