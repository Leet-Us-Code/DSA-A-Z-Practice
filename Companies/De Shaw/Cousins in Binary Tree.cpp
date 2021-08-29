// Hari

class Solution {
public:
    int xDepth, yDepth, xParent, yParent;
    
    void helper(TreeNode* root, int x, int y, int currDepth, int currEleParent){
        // base
        if(root == nullptr) return;
        if(root->val == x){
            xDepth = currDepth;
            xParent = currEleParent;
        }
        if(root->val == y){
            yDepth = currDepth;
            yParent = currEleParent;
        }
        helper(root->left, x, y, currDepth+1, root->val);
        helper(root->right, x, y, currDepth+1, root->val);
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        // fast
        ios_base::sync_with_stdio(false);
        // base
        if(root->val == x || root->val == y) return false; 
        // not possible for cousins if one is parent of another
        helper(root, x, y, 0, 0); 
        
        if(xDepth == yDepth && xParent != yParent) return true;
        return false;        
    }
};
