class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool canBePlaced(vector<vector<char>> board, int row, int col, char ch)
    {
        //check the row
        for(int i = 0; i < 9; i++)
        {
            if(board[row][i] == ch)
                return false;
        }
        //check the col
        for(int i = 0; i < 9; i++)
        {
            if(board[i][col] == ch)
                return false;
        }
        //check the 3*3 submatrix
        int sr = row - row%3;
        int sc = col - col%3;
        for(int i = sr; i < sr+3; i++)
        {
            for(int j = sc; j < sc+3; j++)
            {
                if(board[i][j] == ch)
                    return false;
            }
        }
        return true;
    }
    //sometimes making th helper function void leads to TLE -> hence making it to boolean
    bool solveHelper(vector<vector<char>> &board, int row, int col)
    {
        if(row == 9)
            return true;
        if(col == 9)
        {
            return solveHelper(board, row+1, 0);
        }
        if(board[row][col] != '.'){
            return solveHelper(board, row, col+1);
        }
        for(int i = 1; i <= 9; i++)
        {
            char ch = (char)(i + '0');
            if(canBePlaced(board, row, col, ch))
            {
                board[row][col] = ch;
                if(solveHelper(board, row, col+1))
                    return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int row = 0, col = 0;
        solveHelper(board, row, col);
    }
};
