// Hari

int counter(int m, int n, int midVal){
        // to find # of elements <= midVal: at each row, there can be n elements <= midVal or midVal/i as each row is i * elements in first row. Keep summing the count
        int count = 0;
        for(int i = 1; i<=m; i++){
            count += min(n, midVal/i);
        }
        return count;
    }
    
    
    int findKthNumber(int m, int n, int k) {
        // fast
        ios_base::sync_with_stdio(false);
        int L = 1, R = m*n, ans = 0; // 1 indexed matrix
        // first we find out middle val possible in matrix, then find the # of elements in matrix < mid val. If this count < k -> inc left. Else if its >= then,
        // there is a chance of mid being the right ans, so keep it for sake and then travel to the left (R = mid-1) to see if a smaller number is also available. 
        while(L <= R){
            //int mid = L + (R - L) / 2;
            int mid = L + R >> 1; // same. right shift div by 2. Left shift -> x 2
            if(counter(m, n, mid) < k) L = mid + 1;
            else {
                ans = mid;
                R = mid - 1;
            }
        }
        
        return ans;
    }
