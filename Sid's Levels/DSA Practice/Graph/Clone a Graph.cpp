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
        if(node == NULL)
            return NULL;
        unordered_map<Node*, Node*> mp;
        mp[node] = new Node(node->val, {});
        queue<Node*> q;
        q.push(node);
        vector<bool> visited(1000, false);
        visited[node->val] = true;
        Node *res = mp[node];
        while(!q.empty())
        {
            Node *cur = q.front();
            q.pop();
            for(Node *nbr : cur->neighbors)
            {
                if(!visited[nbr->val])
                {
                    visited[nbr->val] = true;
                    q.push(nbr);
                    mp[nbr] = new Node(nbr->val, {}); 
                }
                mp[cur]->neighbors.push_back(mp[nbr]);
            }
        }
        return res;
    }
};
