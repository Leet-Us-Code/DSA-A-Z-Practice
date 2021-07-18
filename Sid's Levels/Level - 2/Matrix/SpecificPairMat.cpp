//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for(int i = 0; i < n; i++)
    {
        vector<int> temp;
        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
        temp.clear();
    }
    int aux[1000][1000];
    int maxValue = INT_MIN;
    //last row 
    aux[n - 1][n - 1] = arr[n - 1][n - 1];
    int maxv = arr[n-1][n-1];
    for(int i = n-2; i >= 0; i--)
    {
        if(maxv < arr[n-1][i])
        maxv = arr[n-1][i];
        aux[n-1][i] = maxv;
    }
    //last column 
    maxv = arr[n-1][n-1];
    for(int i = n-2; i >= 0; i--)
    {
        if(maxv < arr[i][n-1])
        maxv = arr[i][n-1];
        aux[i][n-1] = maxv;
    }
    //preprocess rest of the matrix 
    for(int i = n-2; i >= 0; i--)
    {
        for(int j = n-2; j >= 0; j--)
        {
            if(maxValue < aux[i+1][j+1] - arr[i][j])
            maxValue = aux[i+1][j+1] - arr[i][j];
            aux[i][j] = max(arr[i][j], max(aux[i+1][j], aux[i][j+1]));
        }
    }
    cout << maxValue << endl;
}
