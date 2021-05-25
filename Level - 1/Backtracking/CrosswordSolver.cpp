//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void print(vector<string> matrix,int n)
{
    for(int i=0;i<n;i++)
    cout<<matrix[i]<<endl;
}
vector<string> checkHorizontal(vector<string> matrix, int row,int col, string cur)
{
    int n=cur.length();
    for(int i=0;i<n;i++)
    {
        if(matrix[row][col+i]=='-'|| matrix[row][col+i]==cur[i])
        matrix[row][col+i]=cur[i];
        else
        {
            matrix[0][0]='@';
            return matrix;
        }
    }
    return matrix;
}
vector<string> checkVertical(vector<string> matrix, int row, int col, string cur)
{
    int n=cur.length();
    for(int i=0;i<n;i++)
    {
        if(matrix[row+i][col]=='-' || matrix[row+i][col]==cur[i])
        matrix[row+i][col]=cur[i];
        else
        {
            matrix[0][0]='@';
            return matrix;
        }
    }
    return matrix;
}
void solve(vector<string> &words, vector<string> &matrix, int ind, int n)
{
    if(ind<words.size())
    {
        string cur=words[ind];
        int maxLen=n-cur.length();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=maxLen;j++)
            {
                vector<string> temp=checkVertical(matrix,j,i,cur);
                if(temp[0][0]!='@')
                {
                    solve(words,temp,ind+1,n);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=maxLen;j++)
            {
                vector<string> temp=checkHorizontal(matrix,i,j,cur);
                if(temp[0][0]!='@')
                {
                    solve(words,temp,ind+1,n);
                }
            }
        }
    }
    else
    {
        print(matrix,n);
        return;
    }
}
int main()
{
    vector<string> matrix;
    string s;
    for(int i=0;i<10;i++)
    {
        cin>>s;
        matrix.push_back(s);
    }
    string x;
    cin>>x;
    string s1;
    vector<string> words;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]!=';')
        s1.push_back(x[i]);
        else
        {
            words.push_back(s1);
            s1="";
        }
    }
    words.push_back(s1);
    solve(words,matrix,0,10);
}
