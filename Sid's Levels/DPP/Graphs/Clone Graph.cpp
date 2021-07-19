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
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return NULL;
        unordered_map<Node*, Node*> mp;
        Node *cloned = new Node(node->val, {});
        mp[node] = cloned;
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
        {
            Node *x = q.front();
            q.pop();
            for(Node *n : x->neighbors)
            {
                if(mp.find(n) == mp.end())
                {
                    mp[n] = new Node(n->val, {});
                    q.push(n);
                }
                mp[x]->neighbors.push_back(mp[n]);
            }
        }
        return cloned;
    }
};
