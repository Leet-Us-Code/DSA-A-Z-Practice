//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<int> sieve(1000001, 1); // 1 indicates prime 
	int cntr = 0;
	for(int i = 2; i*i <= 1000001; i++)
	{
		if(sieve[i] == 1)
		{
			for(int j = i*i; j <= 1000001; j+=i)
			{
				sieve[j] = 0;
			}
		}
	}
	vector<int> cumulative(1000001);
	cumulative[0] = 1;
	cumulative[1] = 1;
	for(int i = 2; i <= 1000001; i++)
	{
		cumulative[i] = cumulative[i-1] + sieve[i];
	}
	while(t--)
	{
		int a, b;
		cin >> a >> b; 
		cout << cumulative[b] - cumulative[a-1] << endl;
	}
}
