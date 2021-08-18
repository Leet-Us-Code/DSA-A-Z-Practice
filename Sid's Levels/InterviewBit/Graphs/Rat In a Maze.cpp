class Solution{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    bool isSafe(int r, int c, vector<vector<int>> m, bool visited[][6], int n)
    {
        if(r < 0 || c < 0 || r >= n || c >= n || m[r][c] == 0 || visited[r][c] == true)
        return false;
        return true;
    }
    void helper(int r, int c, string &path, vector<string> &paths, bool visited[][6], vector<vector<int>> m, int n)
    {
        if(!isSafe(r, c, m, visited, n))
        return;
        if(r == n-1 && c == n-1)
        {
            paths.push_back(path);
            return;
        }
        visited[r][c] = true;
        if(isSafe(r+1, c, m, visited, n))
        {
            path.push_back('D');
            helper(r+1, c, path, paths, visited, m, n);
            path.pop_back();
        }
        if(isSafe(r, c-1, m, visited, n))
        {
            path.push_back('L');
            helper(r, c-1, path, paths, visited, m, n);
            path.pop_back();
        }
        if(isSafe(r, c+1, m, visited, n))
        {
            path.push_back('R');
            helper(r, c+1, path, paths, visited, m, n);
            path.pop_back();
        }
        if(isSafe(r-1, c, m, visited, n))
        {
            path.push_back('U');
            helper(r-1, c, path, paths, visited, m, n);
            path.pop_back();
        }
        visited[r][c] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> paths;
        string path; 
        bool visited[6][6];
        for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
        visited[i][j] = false;
        helper(0, 0, path, paths, visited, m, n);
        return paths;
    }
};
