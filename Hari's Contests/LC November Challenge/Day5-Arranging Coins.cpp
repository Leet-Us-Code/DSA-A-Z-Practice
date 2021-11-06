// Hari - 5/11/21

int arrangeCoins(int n) {
        // fast io
        ios_base::sync_with_stdio(false);
        // naive O(k) where k is sqrt(n)
        // 1+2+...+i = N => i*(i+1) = 2N => i^2 = N => i = sqrt(N)
        /*
        long i = 0, sum = 0, rowNum = 0;
        while(sum <= n) sum += ++i, rowNum++;
        return rowNum-1; 
        */
        
        // binary O(logn)
        // at each row 'n' -> the cumulative sum of coins from row 0 to n (if filled fully) is n*(n+1)/2
        long low = 0, hi = n;
        while(low <= hi){
            long mid = low + (hi-low)/2;
            long cumulativeSum = (mid*(mid+1))/2;
            if(cumulativeSum == n) return mid;
            if(cumulativeSum > n) hi = mid-1;
            else low = mid+1;
        }
        return low-1;
        
    }

