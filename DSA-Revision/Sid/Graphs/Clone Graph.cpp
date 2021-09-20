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
        Node *res = mp[node];
        queue<Node*> q;
        q.push(node);
        vector<bool> visited(105, false);
        visited[node->val] = true;
        while(!q.empty())
        {
            Node *cur = q.front();
            q.pop();
            for(Node *nbr : cur->neighbors)
            {
                if(!visited[nbr->val])
                {
                    visited[nbr->val] = true;
                    mp[nbr] = new Node(nbr->val, {});
                    q.push(nbr);
                }
                mp[cur]->neighbors.push_back(mp[nbr]);
            }
        }
        return res;
    }
};
