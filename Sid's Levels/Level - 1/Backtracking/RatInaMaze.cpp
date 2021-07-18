// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> printPath(int m[MAX][MAX], int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5
bool safe(int row, int col, int m[MAX][MAX], int n, bool visited[][MAX])
{
    if(row == -1 || col == -1 || row == n || col == n || visited[row][col] || m[row][col] == 0)
    return false;
    else
    return true;
}
void allPaths(int row, int col, int m[MAX][MAX], int n, string &paths, vector<string> &possible, bool visited[][MAX])
{
    if(!safe(row, col, m, n, visited))
    return;
    if(row == n-1 && col == n-1)
    {
        possible.push_back(paths);
        return;
    }
    //marking the current cell as visited or not
    visited[row][col] = true;
    //checking the down move
    if(safe(row+1,col,m,n,visited))
    {
        paths.push_back('D');
        allPaths(row+1,col,m,n,paths,possible,visited);
        paths.pop_back();
    }
    //check if left move is valid or not
    if(safe(row,col-1,m,n,visited))
    {
        paths.push_back('L');
        allPaths(row,col-1,m,n,paths,possible,visited);
        paths.pop_back();
    }
    //checking the right move
    if(safe(row,col+1,m,n,visited))
    {
        paths.push_back('R');
        allPaths(row,col+1,m,n,paths,possible,visited);
        paths.pop_back();
    }
    //checking the upper move
    if(safe(row-1,col,m,n,visited))
    {
        paths.push_back('U');
        allPaths(row-1,col,m,n,paths,possible,visited);
        paths.pop_back();
    }
    //unmarking the visited node for more paths
    visited[row][col] = false;
}
vector<string> printPath(int m[MAX][MAX], int n) {
    // Your code goes here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //to hold all the possible strings
    vector<string> possible;
    string paths;
    bool visited[n][MAX];
    int i,j;
    for(i = 0; i < MAX; i++)
    for(j = 0; j < MAX; j++)
    visited[i][j] = false;
    allPaths(0, 0, m, n, paths, possible, visited);
    return possible;
}
