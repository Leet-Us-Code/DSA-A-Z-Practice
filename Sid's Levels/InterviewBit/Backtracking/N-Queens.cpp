class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void solve(vector<string> &board, int r, int n, vector<bool> &col, vector<bool> &ud, vector<bool> &ld, vector<vector<string>> &res)
    {
        if(r == n)
        {
            res.push_back(board);
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(board[r][i] == '.' && ud[n-(r-i)] == false && col[i] == false && ld[r+i] == false)
                {
                    board[r][i] = 'Q';
                    ud[n-(r-i)] = true;
                    col[i] = true;
                    ld[r+i] = true;
                    solve(board, r+1, n, col, ud, ld, res);
                    board[r][i] = '.';
                    ud[n-(r-i)] = false;
                    col[i] = false;
                    ld[r+i] = false;
                }
            }
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        vector<vector<string>> res;
        for(int i = 0; i < n; i++)
        {
            string s;
            for(int j = 0; j < n; j++)
            {
                s.push_back('.');
            }
            board.push_back(s);
        }
        vector<bool> col(n, false), ld(n, false), ud(n, false);
        solve(board, 0, n, col, ud, ld, res);
        return res;
    }
};
