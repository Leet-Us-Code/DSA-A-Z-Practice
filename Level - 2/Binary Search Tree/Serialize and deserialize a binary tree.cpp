/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "X,";
        string left = serialize(root->left);
        string right = serialize(root->right);
        string current = to_string(root->val) + ",";
        return current + left + right;
    }

    // Decodes your encoded data to tree.
    TreeNode *helper(queue<string> &q)
    {
        if(q.empty())
            return NULL;
        string top1 = q.front();
        q.pop();
        TreeNode *root;
        if(top1 == "X")
        {
            return NULL;
        }
        root = new TreeNode(stoi(top1));
        root->left = helper(q);
        root->right = helper(q);
        return root;
    }
    TreeNode* deserialize(string data) {
        //split the string based on the delimiter => ","
        string s;
        queue<string> q;
        for(int i = 0; i < data.length(); i++)
        {
            if(data[i] == ',')
            {
                q.push(s);
                s.clear();
            }
            else
            {
                s.push_back(data[i]);
            }
        }
        return helper(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
