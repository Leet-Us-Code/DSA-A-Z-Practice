// Hari

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
    Node* cloneGraph(Node* node) {
        // fast
        ios_base::sync_with_stdio(false);
        unordered_map<Node*, Node*> umap; // old node -> new node mapping 

        // edge case 
        if (!node) return nullptr;

        return dfs(node, umap);
    }

    Node* dfs(Node* currNode, unordered_map<Node*, Node*> &umap) {
        // check if deep copy for currNode is already there. If not, create it 
        if (umap.find(currNode) == umap.end()) {
            Node* newNode = new Node(currNode->val, {});
            umap[currNode] = newNode; 
        }

        // handling neighbors of currNode 
        for (auto it: currNode->neighbors) {
            // if deep copy exists - add it to adj list 
            if (umap.find(it) != umap.end()) {
                umap[currNode]->neighbors.push_back(umap.find(it)->second);
            } else {
                Node* neighborCopy = dfs(it, umap);
                umap[currNode]->neighbors.push_back(neighborCopy);
            }
        }

        return umap[currNode];
    }
};
