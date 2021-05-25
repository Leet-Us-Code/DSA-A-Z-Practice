//OM GAN GANAPATHAYE NAMMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
struct Node 
{
    int data; // the data part 
    Node *left; //the left child pointer
    Node *right; // the right child pointer
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2); // assigns the left child
    root->right = new Node(3); // assigns the right child 
    root->left->left = new Node(4); //assigns the left child of the left child of root 
    return 0;
}
