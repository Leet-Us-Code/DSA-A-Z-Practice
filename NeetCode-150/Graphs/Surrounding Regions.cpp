// Hari

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        // fast
        ios_base::sync_with_stdio(false);
        int rows = board.size();
        int cols = board[0].size(); 

        /**
        - Boundary 'O's will never be surrounded by 'X' in all regions
        - Any group of 'O's where atleast one of them is on boundary will never be a 
        "surrounded region"
        - Find all such unsurroundable regions and mark them as 'L' 
        - Traverse the matrix, convert every other 'O' to 'X' as it will always be in a 
        "surrounded region"
        - Replace 'L' with 'O' by traversing matrix again
        */

        // edge-case
        if (board.size() == 0) return; 

        // Traverse first and last rows (border)
        for(int j = 0; j<cols; j++) {
            dfs(board, 0, j); // first row
            dfs(board, rows-1, j); // last row
        }

        // Traverse first and last cols (border)
        for(int i = 0; i<rows; i++) {
            dfs(board, i, 0); // first col
            dfs(board, i, cols-1); // last col
        }

        // Traverse matrix to convert all remaining 'O' -> 'X' 
        // Traverse matrix to convert all 'L' -> 'O' 
        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++) {
                if (board[i][j] == 'O') board[i][j] = 'X'; 
                else if (board[i][j] == 'L') board[i][j] = 'O';  
            }
        }
    }

    void dfs(vector<vector<char>>& board, int i, int j) {
        // boundary
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return;

        // curr node should be a 'O' - else ignore
        if (board[i][j] == 'O') {
            board[i][j] = 'L'; 

            // traverse dfs all directions
            dfs(board, i+1, j);
            dfs(board, i-1, j);
            dfs(board, i, j+1);
            dfs(board, i, j-1);
        }
    }
};
