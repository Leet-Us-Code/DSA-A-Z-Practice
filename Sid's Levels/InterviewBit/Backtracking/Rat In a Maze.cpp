//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Solution{
    public:
    bool isSafe(vector<vector<int>> m, vector<vector<bool>> visited, int r, int c, int n)
    {
        if(r < 0 || r >= n || c < 0 || c >= n || m[r][c] == 0 || visited[r][c] == true)
        return false;
        return true;
    }
    void helper(vector<vector<int>> &m, vector<vector<bool>> &visited, int r, int c, string &path, vector<string> &paths, int n)
    {
        if(!isSafe(m, visited, r, c, n))
        return;
        if(r == n-1 && c == n-1)
        {
            paths.push_back(path);
            return;
        }
        visited[r][c] = true;
        //now travel in all the 4 directions alphabetically 
        if(isSafe(m, visited, r+1, c, n))
        {
            path.push_back('D');
            helper(m, visited, r+1, c, path, paths, n);
            path.pop_back();
        }
        if(isSafe(m, visited, r, c-1, n))
        {
            path.push_back('L');
            helper(m, visited, r, c-1, path, paths, n);
            path.pop_back();
        }
        if(isSafe(m, visited, r, c+1, n))
        {
            path.push_back('R');
            helper(m, visited, r, c+1, path, paths, n);
            path.pop_back();
        }
        if(isSafe(m, visited, r-1, c, n))
        {
            path.push_back('U');
            helper(m, visited, r-1, c, path, paths, n);
            path.pop_back();
        }
        visited[r][c] = false;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> paths;
        string path;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        helper(m, visited, 0, 0, path, paths, n);
        return paths;
    }
};
