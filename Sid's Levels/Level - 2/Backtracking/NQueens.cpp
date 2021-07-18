class Solution {
public:
    bool solve(vector<vector<string>> &sol, vector<string> &board, bool cols[], bool nd[], bool rd[], int row)
    {
        if(row == board.size())
        {
            sol.push_back(board);
        }
        for(int col = 0; col < board.size(); col++)
        {
            if(cols[col] == false && nd[row+col] == false && rd[row-col+board.size()-1] == false)
            {
                board[row][col] = 'Q';
                cols[col] = true;
                nd[row+col] = true;
                rd[row-col+board.size()-1] = true;
                if(solve(sol, board, cols, nd, rd, row+1))
                    return true;
                board[row][col] = '.';
                cols[col] = false;
                nd[row+col] = false;
                rd[row-col+board.size()-1] = false;
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
            x.push_back('.');
        vector<string> board;
        for(int i = 0; i < n; i++)
            board.push_back(x);
        vector<vector<string>> sol;
        bool column[100], nd[100], rd[100];
        for(int i = 0; i < 100; i++)
        {
            column[i] = false;
            nd[i] = false;
            rd[i] = false;
        }
        solve(sol, board, column, nd, rd, 0);
        return sol;
    }
};
