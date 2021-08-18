// Hari

int kthGrammar(int n, int k) {
        /*
         Recursive Solution
         For an idx k, its corresponding parent when drawn as BTree would be ceil(K/2)
         eg. if K = 2 -> parent = ceil(2/2) = 1. K = 3 -> parent = ceil(3/2) = 2
        
        0   1
       0 1  1 0
       
        First find out the immediate parent of the target ele through recursion, then check the position of target element and find its value based on what the parent is              
        */
        
        
        // fast
        ios_base::sync_with_stdio(false);
        // base
        if(n == 1) return 0; // 0 is the top most element of tree (where n = 1 (1 indexed))
        // recursive
        // first find out if k is even or odd. 
        if(k % 2 == 0){
            // even -> now if parent is 0 then child is 1 (k even) or 0 (k odd) [0 1]
            return kthGrammar(n-1, k/2) == 0 ? 1 : 0; 
        } else {
            // odd -> now if parent is 0 then child is 0 else 1
            return kthGrammar(n-1, (k+1)/2) == 0 ? 0 : 1; 
        }
        
    }
