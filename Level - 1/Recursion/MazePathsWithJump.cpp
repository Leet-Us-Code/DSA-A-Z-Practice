//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void getAllPaths(int sr, int sc, int dr, int dc, string path)
{
    if(sr == dr && sc == dc)
    {
        cout << path << " ";
        return;
    }
    //horizontal moves
    for(int i = 1; i <= dc-sc; i++)
    {
        string s2 = "h";
        s2 = s2 + to_string(i);
        getAllPaths(sr,sc+i,dr,dc,s2+path);
    }
    //vertical moves
    for(int i = 1; i <= dr-sr; i++)
    {
        string s3 = "v";
        s3 = s3 + to_string(i);
        getAllPaths(sr+i,sc,dr,dc,s3+path);
    }
    //diagonal moves
    int min = dc-sc;
    if(dc-sc > dr-sr)
    min = dr-sr;
    else
    min = dc-sc;
    for(int i = 1; i <= min; i++)
    {
        string s4 = "d";
        s4 = s4 + to_string(i);
        getAllPaths(sr+i,sc+i,dr,dc,path);
    }
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        int m;
        cin >> n >> m;
        string paths;
        getAllPaths(1,1,n,m,paths);
        cout << endl;
    }
}
