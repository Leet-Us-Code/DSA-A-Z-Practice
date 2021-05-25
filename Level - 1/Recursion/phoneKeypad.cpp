//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
string key[] = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
void phoneKeypad(string input, string output, int i, int &count)
{
	if(i == input.size())
	{
		cout << output <<" ";
		count++;
		return;
	}
	else
	{
		int ch = input[i] - '0';
		for(int j = 0; j < key[ch].size(); j++)
		{
			char c;
			c = key[ch][j];
			phoneKeypad(input,output+c,i+1,count);
		}
	}
}
int main()
{
	string inp;
	cin >> inp;
	string output;
	int count = 0;
	phoneKeypad(inp,output,0,count);
	cout << endl << count << endl;
}
