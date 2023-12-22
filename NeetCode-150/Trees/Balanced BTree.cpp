// Hari

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        bool balanceBool = true;

        // edge
        if (!root) return true;

        height(root, balanceBool);
        return balanceBool; 
    }

    int height(TreeNode* node, bool& balanceBool) {
        // base
        if (!node) return 0;

        int leftHeight = height(node->left, balanceBool);
        int rightHeight = height(node->right, balanceBool);
        int currHt = 1 + max(leftHeight, rightHeight); 
        bool isCurrNodeBalanced = abs(leftHeight - rightHeight) <= 1;
        
        balanceBool = balanceBool && isCurrNodeBalanced; // if any stage curr node is false, balanceBool is false also from then on 
        return currHt; 
    }
};
