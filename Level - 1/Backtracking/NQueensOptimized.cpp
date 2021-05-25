//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM
//JAI BAJRANGBALI
//AMME NARAAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
#define MAX 10
using namespace std;
bool solveBoard(int board[][MAX], int col, int ld[], int rd[], int cd[], int n)
{
    if(col >= n)
    return true;
    for(int i = 0; i < n; i++)
    {
        if(ld[i-col+n-1] != 1 && rd[i+col] != 1 && cd[i] != 1)
        {
            board[i][col] = 1;
            ld[i-col+n-1] = 1;
            rd[i+col] = 1;
            cd[i] = 1;
            if(solveBoard(board,col+1,ld,rd,cd,n))
            return true;
            cd[i] = 0;
            rd[i+col] = 0;
            ld[i-col+n-1] = 0;
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
    bool res = solveBoard(board,0,ld,rd,cd,n);
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
