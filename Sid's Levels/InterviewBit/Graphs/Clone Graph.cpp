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
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return NULL;
        unordered_map<Node*, Node*> mp;
        mp[node] = new Node(node->val, {});
        Node *cloned = mp[node];
        vector<bool> visited(100000, false);
        queue<Node*> q;
        q.push(node);
        visited[node->val] = true;
        while(!q.empty())
        {
            Node *cur = q.front();
            q.pop();
            for(Node *nbrs : cur->neighbors)
            {
                if(!visited[nbrs->val])
                {
                    visited[nbrs->val] = true;
                    mp[nbrs] = new Node(nbrs->val, {});
                    q.push(nbrs);
                }
                mp[cur]->neighbors.push_back(mp[nbrs]);
            }
        }
        return cloned;
    }
};
