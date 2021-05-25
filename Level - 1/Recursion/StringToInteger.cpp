// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */

//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
int isChar(char ch)
{
    if(ch != '0' && ch != '1' && ch != '2' && ch != '3' && ch != '4' && ch != '5' && ch != '6' && ch != '7' && ch != '8' && ch != '9')
    return 1;
    else
    return 0;
}
int conv(string s, int i, int sum)
{
    if(i == s.length())
    return sum;
    else if(isChar(s[i]))
    return -1;
    else
    {
        sum = sum + (s[i] - '0')*pow(10,s.length()-1-i);
        return conv(s,i+1,sum);
    }
}
int atoi(string s)
{
    if(s[0] == '-')
    {
        s = s.substr(1,s.length()-1);
        int x;
        x = conv(s,0,0);
        x = 0 - x;
        return x;
    }
    else
    return conv(s,0,0);
}
