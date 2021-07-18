//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int r, int c, int n, int grid[][10])
{
    if(r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != 0)
    return false;
    else
    return true;
}
void printMatrix(int grid[][10], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
void generateAll(int r, int c, int n, int grid[][10], int move)
{
    if(!isSafe(r,c,n,grid))
    return;
    else if(move == n*n)
    {
        grid[r][c] = move;
        printMatrix(grid,n);
        grid[r][c] = 0;
        cout << endl;
        return;
    }
    else
    {
        grid[r][c] = move;
        generateAll(r-2,c+1,n,grid,move+1);
        generateAll(r-1,c+2,n,grid,move+1);
        generateAll(r+1,c+2,n,grid,move+1);
        generateAll(r+2,c+1,n,grid,move+1);
        generateAll(r+2,c-1,n,grid,move+1);
        generateAll(r+1,c-2,n,grid,move+1);
        generateAll(r-1,c-2,n,grid,move+1);
        generateAll(r-2,c-1,n,grid,move+1);
        grid[r][c] = 0;
    }
}
int main()
{
    int n;
    cin >> n;
    int r, c;
    cin >> r >> c;
    int grid[10][10];
    for(int i  = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    grid[i][j] = 0;
    generateAll(r,c,n,grid,1);
    cout << endl;
}
