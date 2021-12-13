// Hari

// Method - 1 (Recursion)

class Solution {
    int helper(String s, int i, int j){
        // recursive
        // base 
        if(i >= j) return 1;
        // main rec
        if(s.charAt(i) == s.charAt(j)) return helper(s, i+1, j-1);
        else return 0;
    }
    public int countSubstrings(String s) {
        int N = s.length();
        int ans = 0;
        for(int i = 0; i<N; i++){
            for(int j = i; j<N; j++){
                ans += helper(s, i, j);
            }
        }
        return ans;
    }
}

// Method - 2 (Recursion + Memoization)

class Solution {
    int[][] mem = new int[1000][1000];
    
    int helper(String s, int i, int j){
        // recursive
        // base 
        if(i >= j) return 1;
        // main rec
        // if already there
        if(mem[i][j] >= 0) return mem[i][j];
        if(s.charAt(i) == s.charAt(j)){
            mem[i][j] = helper(s, i+1, j-1);
            return mem[i][j];
        }
        else {
            mem[i][j] = 0;
            return 0;
            //return mem[i][j] = 0;
        }            
    }
    public int countSubstrings(String s) {
        int N = s.length();
        int ans = 0;
        // filling matrix
        for(int i = 0; i<mem.length; i++){
            for(int j = 0; j<mem[0].length; j++){
                mem[i][j] = -1;
            }
        }
        
        for(int i = 0; i<N; i++){
            for(int j = i; j<N; j++){
                ans += helper(s, i, j);
            }
        }
        return ans;
    }
}

// Sid
// Method - 3 (DP)

