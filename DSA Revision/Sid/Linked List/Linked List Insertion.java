/*
class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
}
*/
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Solution
{
    //Function to insert a node at the beginning of the linked list.
    Node insertAtBeginning(Node head, int x)
    {
        // code here
        Node temp = new Node(x);
        if(head == null)
        {
            head = temp;
            return head;
        }
        temp.next = head;
        head = temp;
        return head;
    }
    
    //Function to insert a node at the end of the linked list.
    Node insertAtEnd(Node head, int x)
    {
        // code here
        Node temp = new Node(x);
        if(head == null)
        {
            head = temp;
            return head; 
        }
        Node start = head; 
        while(start.next != null)
        {
            start = start.next;
        }
        start.next = temp;
        temp.next = null;
        return head;
    }
}
