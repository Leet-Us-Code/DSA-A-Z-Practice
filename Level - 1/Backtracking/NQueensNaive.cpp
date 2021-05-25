//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM
//JAI BAJRANGBALI
//AMME NARAAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
#define MAX 10
using namespace std;
bool isSafe(int board[][MAX], int row, int col, int n)
{
    int i, j;
    for(i = 0; i < col; i++)
    {
        if(board[row][i])
        return false;
    }
    for(i = row, j = col; i >= 0 && j >= 0; i--,j--)
    {
        if(board[i][j])
        return false;
    }
    for(i = row, j = col; j >= 0 && i < n;i++,j--)
    {
        if(board[i][j])
        return false;
    }
    return true;
}
bool solveBoard(int board[][MAX], int col, int n)
{
    if(col >= n)
    return true;
    for(int i = 0; i < n; i++)
    {
        if(isSafe(board,i,col,n))
        {
            board[i][col] = 1;
            if(solveBoard(board,col+1,n))
            return true;
            board[i][col] = 0;
        }
    }
    return false;
}
void solve(int board[][MAX], int n)
{
    int ld[30] = {0};
    int rd[30] = {0};
    int cd[30] = {0};
    bool res = solveBoard(board,0,n);
    if(res == false)
    cout << -1 << endl;
    else
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            cout << board[i][j] << " ";
            cout << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int board[n][MAX];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            board[i][j] = 0;
        }
        solve(board,n);
        cout << endl;
    }
}
