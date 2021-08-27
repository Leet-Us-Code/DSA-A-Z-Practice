// Hari

int Solution::solve(vector<vector<int> > &A, int B) {
    //ios_base::sync_with_stdio(false);
    
    // first make dp matrix storing all sum values
    int rows = A.size(); int cols = A[0].size();
    int dp[rows+1][cols+1];
    int maxSum = INT_MIN;
    
    for(int i = 1; i<=rows; i++){ // to ensure we have a top row 
        for(int j = 1; j<=cols; j++){ // to ensure we have a left col
            // we find sum of currEle  + all vals in top row till curr + all vals in cols
            // till curr - diagonal (as it has been added 2 times)
            dp[i][j] = A[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
    
    for(int i = 1; i<=rows; i++){ 
        for(int j = 1; j<=cols; j++){ 
            int currSum = INT_MIN;
            // say we want 3x3 squares -> first see if 3 rows & cols are there before curr
            if(i-B >= 0 && j-B >= 0){
                // subtract the val at i-B and j-B so that we get the sum of B size 
                // window square. Diagonal gets subtracted 2x so add it once
                currSum = dp[i][j] - dp[i-B][j] - dp[i][j-B] + dp[i-B][j-B];
                maxSum = max(maxSum, currSum);
            }
        }
    }
    
    return maxSum;
    
}
