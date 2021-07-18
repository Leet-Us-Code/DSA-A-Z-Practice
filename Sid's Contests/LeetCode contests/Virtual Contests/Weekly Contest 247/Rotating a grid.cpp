class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void takeLayer(vector<vector<int>> grid, int sr, int sc, int er, int ec, vector<int> &temp)
    {
        //take the first col elements 
        for(int i = sr; i < er; i++)
            temp.push_back(grid[i][sc]);
        //take the last row 
        for(int i = sc; i < ec; i++)
            temp.push_back(grid[er][i]);
        //take the last col in reverse order 
        for(int i = er; i > sr; i--)
            temp.push_back(grid[i][ec]);
        //take the first row in reverse order 
        for(int i = ec; i > sc; i--)
            temp.push_back(grid[sr][i]);
    }
    void rotate(vector<int> &temp, int k)
    {
        vector<int> x1, x2;
        int n = temp.size();
        k = k%n;
        for(int i = 0; i < n-k; i++)
            x1.push_back(temp[i]);
        for(int i = n-k; i < n; i++)
            x2.push_back(temp[i]);
        temp.clear();
        for(int i = 0; i < x2.size(); i++)
            temp.push_back(x2[i]);
        for(int i = 0; i < x1.size(); i++)
            temp.push_back(x1[i]);
    }
    void putLayer(vector<vector<int>> &grid, int sr, int sc, int er, int ec, vector<int> temp)
    {
        int ind = 0; 
        //take the first col elements 
        for(int i = sr; i < er; i++)
            grid[i][sc] = temp[ind++];
        //take the last row 
        for(int i = sc; i < ec; i++)
            grid[er][i] = temp[ind++];
        //take the last col in reverse order 
        for(int i = er; i > sr; i--)
            grid[i][ec] = temp[ind++];
        //take the first row in reverse order 
        for(int i = ec; i > sc; i--)
            grid[sr][i] = temp[ind++];
    }
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        for(int c = 0; c < min(m,n)/2; c++)
        {
            int startr = c, startc = c;
            int sizer = m-2*c, sizec = n-2*c;
            int endr = startr + sizer - 1, endc = startc + sizec - 1;
            vector<int> temp;
            takeLayer(grid, startr, startc, endr, endc, temp);
            // for(int i = 0; i < temp.size(); i++)
            //     cout << temp[i] << " ";
            // cout << endl;
            rotate(temp, k);
            
            putLayer(grid, startr, startc, endr, endc, temp);
        }
        return grid;
    }
};
