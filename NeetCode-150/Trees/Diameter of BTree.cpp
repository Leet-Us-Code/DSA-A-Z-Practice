class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // fast
        ios_base::sync_with_stdio(false);
        int dia = 0;
        helper(root, dia);

        return dia;
    }

    /**
    Find ht of left and right subtrees (for curr node) and add them to get diameter 
    with curr node as inflection point
    */
    int helper(TreeNode* root, int& dia) {
        // base
        if (!root) return 0;

        int leftH = helper(root->left, dia);
        int rightH = helper(root->right, dia);
        int ht = 1 + max(leftH, rightH);
        dia = max(dia, leftH + rightH);

        return ht;
    }
};
