//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void replacePi(char s[], int i)
{
	if(s[i] == '\0')
	return;
	else
	{
		if(s[i] == 'p' && s[i+1] == 'i')
		{
			int j;
			for(j = strlen(s); j >= i+2; j--) // we also have to shift the null characters
			{
				s[j+2] = s[j];
			}
			s[i] = '3';
			s[i+1] = '.';
			s[i+2] = '1';
			s[i+3] = '4';
		}
		replacePi(s,i+1);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char s[100000];
		cin >> s;
		//cout << strlen(s) << endl;
		replacePi(s,0);
		cout << s << endl;
	}
}
