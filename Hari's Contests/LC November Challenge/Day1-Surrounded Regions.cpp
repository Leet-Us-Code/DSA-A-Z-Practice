// Hari

    // dfs traversal
    void dfs(vector<vector<char>>& board, int i, int j){
        // we do dfs iff curr cell is 'O'
        if(board[i][j] == 'O'){
            board[i][j] = '1'; // as this is done for boundary 'O's and its connected 'O's
            // boundary check and next dfs in all 4 directions
            if(i > 1) dfs(board, i-1, j); // top. 
            if(i+1 < board.size()) dfs(board, i+1, j); // down
            if(j > 1) dfs(board, i, j-1); // left
            if(j+1 < board[0].size()) dfs(board, i, j+1);
        }
    }
    
    
    
    void solve(vector<vector<char>>& board) {
        // first we find out regions of 'O' which are connected to boundary 'O's
        // and convert these islands to 1. The 'O's remaining are valid and will be
        // converted to 'X'. The 1s will be reverted back to '0'
        
        // fast
        ios_base::sync_with_stdio(false);
        if(board.size() == 0) return;
        
        int rows = board.size();
        int cols = board[0].size();
        
        // traversing boundaries to check for 0
        // first and last columns
        for(int i = 0; i<rows; i++){
            // do dfs traversals
            dfs(board, i, 0);
            dfs(board, i, cols-1);
        }
        // first and last rows
        for(int j = 0; j<cols; j++){
            // do dfs traversals
            dfs(board, 0, j);
            dfs(board, rows-1, j);
        }
        
        // now convert remaining Os to X and 1s to Os
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                else if(board[i][j] == '1') board[i][j] = 'O'; 
            }
        }
        
    }
