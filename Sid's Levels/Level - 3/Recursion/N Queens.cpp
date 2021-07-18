class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool canBePlaced(vector<string> board, int r, int c, vector<bool> row, vector<bool> ld, vector<bool> rd, int n)
    {
        if(row[r] == true || ld[r+c] == true || rd[n-(r-c)] == true)
            return false;
        return true;
    }
    bool queenPlacer(vector<string> &board, int col, vector<bool> &row, vector<bool> &ld, vector<bool> &rd, vector<vector<string>> &res, int n)
    {
        if(col == n)
        {
            res.push_back(board);
        }
        for(int r = 0; r < n; r++)
        {
            if(canBePlaced(board, r, col, row, ld, rd, n))
            {
                row[r] = true;
                ld[r+col] = true;
                rd[n - (r-col)] = true;
                board[r][col] = 'Q';
                if(queenPlacer(board, col+1, row, ld, rd, res, n))
                    return true;
                row[r] = false;
                ld[r+col] = false;
                rd[n - (r-col)] = false;
                board[r][col] = '.';
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        string s;
        for(int i = 0; i < n; i++)
        {
            s.push_back('.');
        }
        vector<string> board(n, s);
        vector<vector<string>> res;
        int col = 0;
        vector<bool> row(n, false);
        vector<bool> ld(2*n, false), rd(2*n, false);
        bool x = queenPlacer(board, col, row, ld, rd, res, n);
        return res;
    }
};
