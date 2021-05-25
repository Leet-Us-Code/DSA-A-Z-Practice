// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++
void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b; 
    b = t;
}
string reverseWord(string str){
    
  //Your code here
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  int n = str.length();
  for(int i = 0; i < n/2; i++)
  {
      swap(str[i], str[n-1-i]);
  }
  return str;
}
