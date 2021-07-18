class Solution {
public:
    bool isSafe(vector<string> board, int row, int col)
    {
        //check the row 
        for(int i = 0; i < col; i++)
        {
            if(board[row][i] == 'Q')
                return false;
        }
        //checking the upper diagonal on left side 
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }
        for(int i = row, j = col; i < board.size() && j >= 0; i++, j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }
        return true;
    }
    bool solve(vector<vector<string>> &sol, vector<string> &board, int col)
    {
        if(col >= board.size())
        {
            sol.push_back(board);
        }
        for(int row = 0; row < board.size(); row++)
        {
            if(isSafe(board, row, col))
            {
                board[row][col] = 'Q';
                if(solve(sol, board, col+1))
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        string x;
        for(int i = 0; i < n; i++)
        {
            x.push_back('.');
        }
        vector<string> board;
        for(int i = 0; i < n; i++)
        {
            board.push_back(x);
        }
        vector<vector<string>> sol;
        solve(sol, board, 0);
        return sol;
    }
};
