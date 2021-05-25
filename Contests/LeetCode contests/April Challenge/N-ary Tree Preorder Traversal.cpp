/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> res;
    vector<int> preorder(Node* root) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADARE NARAYANA
        if(root == NULL)
        {
            return res;
        }
        vector<Node*> x = root->children;
        if(root->val != -1)
        {
            res.push_back(root->val);
        }
        for(int i = 0; i < x.size(); i++)
        {
            int m  = x[i]->val;
            res.push_back(x[i]->val);
            x[i]->val = -1;
            preorder(x[i]);
            x[i]->val = m;//backtracking is done because else there was no way to add the root node
        }
        return res;
    }
};
