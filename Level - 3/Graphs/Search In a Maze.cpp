//Didnt understand but this lead to TLE when doing with vector of vectors
#define MAX 6
class Solution{
    public:
    bool isSafe(vector<vector<int>> m, int n, int r, int c, bool visited[][MAX])
    {
        if(r < 0 || r >= n || c < 0 || c >=n || m[r][c] == 0 || visited[r][c] == true)
        return false;
        else
        return true;
    }
    void helper(vector<vector<int>> m, int n, int r, int c, string &path, vector<string> &paths, bool visited[][MAX])
    {
        if(!isSafe(m, n, r, c, visited))
        return;
        
        if(r == n-1 && c == n-1)
        {
            paths.push_back(path);
            return;
        }
        visited[r][c] = true;
        if(isSafe(m, n, r+1, c, visited))
        {
            path.push_back('D');
            helper(m, n, r+1, c, path, paths, visited);
            path.pop_back();
        }
        if(isSafe(m, n, r, c+1, visited))
        {
            path.push_back('R');
            helper(m, n, r, c+1, path, paths, visited);
            path.pop_back();
        }
        if(isSafe(m, n, r, c-1, visited))
        {
            path.push_back('L');
            helper(m, n, r, c-1, path, paths, visited);
            path.pop_back();
        }
        if(isSafe(m, n, r-1, c, visited))
        {
            path.push_back('U');
            helper(m, n, r-1, c, path, paths, visited);
            path.pop_back();
        }
        visited[r][c] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<string> paths;
        string path; 
        bool visited[MAX][MAX];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                visited[i][j] = false;
            }
        }
        helper(m, n, 0, 0, path, paths, visited);
        sort(paths.begin(), paths.end());
        return paths;
    }
    
};
