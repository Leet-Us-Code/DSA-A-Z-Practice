/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        unordered_map<Node*, Node*> copy; // to map the old node with its copy 
        Node *cloned = new Node(node->val, {});
        copy[node] = cloned; // cloned and node are copied 
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
        {
            Node *cur = q.front();
            q.pop();
            for(Node* n : cur->neighbors)
            {
                //if not already visited or copied 
                if(copy.find(n) == copy.end())
                {
                    copy[n] = new Node(n->val, {});
                    q.push(n);
                }
                copy[cur]->neighbors.push_back(copy[n]);
            }
        }
        return cloned;
    }
};
