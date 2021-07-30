// Hari

int numWays(int n, int k) {
        if(k == 0 || n == 0) return 0;
        if(n == 1) return k;
        // watched sumit malik explanation till 9:13
        long ii = k * 1;  // count when no more than 2 have same, and last 2 have same colors
        long ij = k * (k-1); // count when no more than 2 have same, and last 2 have diff colors
        long total = ii + ij; // sum of vals of ii and ij at every index
        // ignore 0 and 1 indexes 

        for(int i = 3; i<=n; i++){
            ii = ij * 1;
            ij = total * (k-1);
            total = ii + ij;
        }
    return total;

    }
