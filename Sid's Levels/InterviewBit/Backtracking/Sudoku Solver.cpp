class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool canBePlaced(vector<vector<char>> board, int r, int c, char ch)
    {
        for(int i = 0; i < 9; i++)
        {
            if(board[r][i] == ch || board[i][c] == ch)
                return false;
        }
        //3 cross 3 submatrix 
        int row = r - r%3;
        int col = c - c%3;
        for(int i = row; i < row+3; i++)
        {
            for(int j = col; j < col+3; j++)
            {
                if(board[i][j] == ch)
                    return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>> &board, int row, int col)
    {
        if(row == 9)
            return true;
        if(col == 9)
        {
            return solve(board, row+1, 0);
        }
        if(board[row][col] != '.')
            return solve(board, row, col+1);
        for(int i = 1; i <= 9; i++)
        {
            char ch = (char)(i + '0');
            if(canBePlaced(board, row, col, ch))
            {
                board[row][col] = ch;
                if(solve(board, row, col+1))
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int r = 0, c = 0;
        solve(board, r, c);
    }
};
