#include<bits/stdc++.h>
using namespace std;
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
bool isSafe(vector<vector<char>> c, int n, int row, int col, vector<vector<bool>> visited)
{
    if(row < 0 || row >= n || col < 0 || col >= n || c[row][col] == 'X' || visited[row][col] == true)
        return false;
    return true;
}
bool pathHelper(vector<vector<char>> c, int n, int row, int col, vector<vector<bool>> &visited, vector<int> &path)
{
    if(!isSafe(c, n, row, col, visited))
    {
        //not safe so this path shouldnt be taken 
        return false;
    }
    if(row == n-1 && col == n-1)
    {
        //destination reached 
        int val = row*n + col + 1;
        path.push_back(val);
        return true;
    }
    //make the current cell visited 
    visited[row][col] = true;
    int val = row*n + col + 1;
    if(isSafe(c, n, row + 1, col, visited))
    {
        //going down 
        path.push_back(val);
        if(pathHelper(c, n, row+1, col, visited, path))
            return true;
        path.pop_back();
    }
    if(isSafe(c, n, row, col+1, visited))
    {
        path.push_back(val);
        if(pathHelper(c, n, row, col+1, visited, path))
            return true;
        path.pop_back();
    }
    return true;
}
vector<int> findPath(int n, vector<vector<char>> c){
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> path;
    int row = 0, col = 0;
    bool x = pathHelper(c, n, row, col, visited, path);
    return path;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<char>> c(n, vector<char>(n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            c[i][j] = ch;
        }
    }
    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> res = findPath(n, c);
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}
