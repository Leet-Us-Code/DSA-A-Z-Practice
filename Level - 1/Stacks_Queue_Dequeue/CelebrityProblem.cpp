// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 501

int getId(int M[MAX][MAX],int n);

int main()
{
    int T;
    cin>>T;
    int M[MAX][MAX];
    while(T--)
    {
        int N;
        cin>>N;
        memset(M,0,sizeof M);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>M[i][j];
            }
        }
        cout<<getId(M,N)<<endl;

    }
}

// } Driver Code Ends


// The task is to complete this function

// M[][]: input matrix
// n: size of matrix (n*n)

int getId(int M[MAX][MAX], int n)
{
    //Your code here
    //OM GAN GANAPATHAYE NAMO NAMAH
    //JAI SHRI RAM
    //JAI BAJRANGBALI
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    stack<int> s;
    int i;
    for(i = 0; i<n; i++)
    {
        s.push(i);
    }
    while(s.size() > 1)
    {
        int x,y;
        x = s.top();
        s.pop();
        y = s.top();
        s.pop();
        if(M[x][y] == 1)
        {
            //x knows y -> x is not a celebrity
            s.push(y);
        }
        else
        {
            s.push(x);
        }
    }
    int ind = s.top();
    int flag1 = 0, flag2 = 0, flag3 = 0;
    for(i = 0; i<n; i++)
    {
        if(M[ind][i] == 1)
        {
            flag1 = 1;
            break;
        }
    }
    for(i = ind+1; i<n; i++)
    {
        if(M[i][ind] == 0)
        {
            flag2 = 1;
            break;
        }
    }
    for(i = ind-1; i>=0; i--)
    {
        if(M[i][ind] == 0)
        {
            flag3 = 1;
            break;
        }
    }
    if(flag1 == 1 || flag2 == 1 || flag3 == 1)
    return -1;
    else
    return ind;
}
