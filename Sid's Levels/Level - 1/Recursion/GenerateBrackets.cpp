//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
//strings doesnt work over here as we cannot replace a particular character at an index\
//so it's better to work with character array else we ll need to deal with call by reference and stuff

void generate(char out[], int pos, int n, int open, int close)
{
	if(close == n)
	{
		out[pos] = '\0';
		cout << out << endl;
		return;
	}
	if(open > close)
	{
		out[pos] = ')';
		generate(out,pos+1,n,open,close+1);
	}
	if(open < n)
	{
		out[pos] = '(';
		generate(out,pos+1,n,open+1,close);
	}
}
int main()
{
	int n;
	cin >> n;
	char output[100000];
	generate(output,0,n,0,0);
}
