// Hari

int climbStairs(int n) {
        // fast
        ios_base::sync_with_stdio(false);
        vector<int> dp(n+1, 0);
        // base
        if(n == 0 || n == 1 || n == 2) return n;
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2]; // we find no. of ways NOT no. of steps to reach curr step
        }
        return dp[n];
    }

// Hari - Java

class Solution {
    public int climbStairs(int n) {
        int[] arr = new int[n+1];
        // base
        if(n == 0 || n == 1 || n == 2) return n;
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        
        for(int i = 3; i<=n; i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
}

//Sid 
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    public int climbStairs(int n) {
        int[] arr = new int[n+1];
        if(n == 0 || n == 1 || n == 2)
            return n;
        arr[0] = 0; 
        arr[1] = 1; 
        arr[2] = 2; 
        for(int i = 3; i <= n; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
        // if(n == 0 || n == 1 || n == 2)
        //     return n;
        // return climbStairs(n-1) + climbStairs(n-2);
    }
}
