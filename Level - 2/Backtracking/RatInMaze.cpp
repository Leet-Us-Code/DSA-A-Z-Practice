// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++
#define MAX 5
class Solution{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isSafe(vector<vector<int>> m, int n, bool visited[MAX][MAX], int i, int j)
    {
        if(i < 0 || i >= n || j < 0 || j >= n || visited[i][j] == true || m[i][j] == 0)
        return false;
        return true;
    }
    void helper(vector<string> &paths, string &path, vector<vector<int>> m, bool visited[MAX][MAX], int n, int i, int j)
    {
        if(!isSafe(m, n, visited, i, j))
        {
            return;
        }
        if(i == n-1 && j == n-1)
        {
            paths.push_back(path);
            return;
        }
        visited[i][j] = true;
        
        if(isSafe(m, n, visited, i+1, j))
        {
            path.push_back('D');
            helper(paths, path, m, visited, n, i+1, j);
            path.pop_back();
        }
        if(isSafe(m, n, visited, i, j-1))
        {
            path.push_back('L');
            helper(paths, path, m, visited, n, i, j-1);
            path.pop_back();
        }
        if(isSafe(m, n, visited, i, j+1))
        {
            path.push_back('R');
            helper(paths, path, m, visited, n, i, j+1);
            path.pop_back();
        }
        if(isSafe(m, n, visited, i-1, j))
        {
            path.push_back('U');
            helper(paths, path, m, visited, n, i-1, j);
            path.pop_back();
        }
        visited[i][j] = false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        string path;
        vector<string> paths;
        bool visited[MAX][MAX];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                visited[i][j] = false;
            }
        }
        helper(paths, path, m, visited, n, 0, 0);
        return paths;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
