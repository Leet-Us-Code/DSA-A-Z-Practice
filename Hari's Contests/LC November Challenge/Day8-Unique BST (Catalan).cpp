// Hari

int numTrees(int n) {
        // we use concept of catalan numbers. catalan(n) gives us the no. of unique BST 
        // with each BST having a diff root (if n =4 then nodes 1,2,3,4 get to be a 
        // root once)
        
        // fast
        ios_base::sync_with_stdio(false);
        vector<int> catalan(n+1, 0);
        catalan[0] = catalan[1] = 1;
        
        for(int i = 2; i<=n; i++){
            for(int j = 0; j<i; j++){
                catalan[i] += catalan[j] * catalan[i-j-1]; // std catalan formula
            }
        }
        
        return catalan[n];
        
    }
