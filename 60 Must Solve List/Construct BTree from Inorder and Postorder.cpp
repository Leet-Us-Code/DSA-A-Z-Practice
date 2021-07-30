// Hari

unordered_map<int, int> umap;

Node* helper(int post[], int in[], int start, int end, int &idx){
    // base
    if(start > end || idx < 0) return nullptr;
    Node* curr = new Node(post[idx--]);
    if(start == end) return curr; // leaf
    int iidx = umap[curr->data];
    curr->right = helper(post, in, iidx+1, end, idx);
    curr->left = helper(post, in, start, iidx-1, idx);
    return curr;
}

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    umap.clear();
    // put inorder elements into umap for constant lookups
    for(int i = 0; i<n; i++){
        umap[in[i]] = i;
    }
    int idx = n-1;
    return helper(post, in, 0, n-1, idx);
}
