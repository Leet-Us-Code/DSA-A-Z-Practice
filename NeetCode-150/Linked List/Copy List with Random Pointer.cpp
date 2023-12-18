// Hari

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // fast
        ios_base::sync_with_stdio(false);

        // First Pass - create nodes and hashmap for old - new node mapping
        unordered_map<Node*, Node*> umap;

        Node* ptr = head;
        while(ptr) {
            Node* curr = new Node(ptr->val);
            umap[ptr] = curr;
            ptr = ptr->next;
        }

        // Second Pass - Traverse old list and use it to build new List connections 
        ptr = head;
        while(ptr) {
            umap[ptr]->next = umap[ptr->next];
            umap[ptr]->random = umap[ptr->random];
            ptr = ptr->next;
        }

        return umap[head];
    }
};
