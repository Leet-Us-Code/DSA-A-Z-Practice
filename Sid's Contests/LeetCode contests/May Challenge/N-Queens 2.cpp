class Solution {
public:
    bool solve(vector<vector<string>> &sol, vector<string> &board, int row, bool cols[], bool nd[], bool rd[])
    {
        if(row == board.size())
        {
            sol.push_back(board);
        }
        for(int col = 0; col < board.size(); col++)
        {
            if(cols[col] == false && nd[row + col] == false && rd[row - col + board.size() - 1] == false)
            {
                board[row][col] = 'Q';
                cols[col] = true;
                nd[row + col] = true;
                rd[row - col + board.size() - 1] = true;
                if(solve(sol, board, row+1, cols, nd, rd))
                    return true;
                board[row][col] = '.';
                cols[col] = false;
                nd[row + col] = false;
                rd[row - col + board.size() - 1] = false;
            }
        }
        return false;
    }
    int totalNQueens(int n) {
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
        bool col[1000], nd[1000], rd[1000];
        for(int i = 0; i < 1000; i++)
        {
            col[i] = false;
            nd[i] = false;
            rd[i] = false;
        }
        int row = 0;
        solve(sol, board, row, col, nd, rd);
        return sol.size();
    }
};
