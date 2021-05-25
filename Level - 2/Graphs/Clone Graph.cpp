class Solution {
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    
    unordered_map<Node*, Node*> visited;
    Node* cloneGraph(Node* node) {
        if (!node) {
            return NULL;
        }
        Node* cloned = new Node(node -> val, {});
        visited[node] = cloned;
        queue<Node*> q;
        q.push(node);
        while (!q.empty()) {
            Node* cur = q.front();
            q.pop();
            vector<Node*> x = cur->neighbors;
            for(int i = 0; i < x.size(); i++)
            {
                Node *curNode = x[i];
                if(visited.find(curNode) == visited.end())
                {
                    visited[curNode] = new Node(curNode->val, {});
                    q.push(curNode);
                }
                visited[cur]->neighbors.push_back(visited[curNode]);
            }
        }
        return cloned;
    }

};
