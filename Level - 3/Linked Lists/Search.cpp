#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
bool isPresent(node * head, int key){
    //Complete this function 
    node *ptr = head;
    while(ptr != NULL)
    {
        if(ptr->data == key)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
    
    
    
    
    
}
