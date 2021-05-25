// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int fun(string &str);


 // } Driver Code Ends


//User function template 

// s : given string
// return the expected answer
int fun(string &s) {
    //code here
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int a = 0; // count of sequences with different a's
    int ab = 0; // count of different sequences with different b's 
    int abc = 0; // count of different sequences with different c's 
    int max = pow(10,9) + 7;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a')
        a = 2*a + 1;
        else if(s[i] == 'b')
        ab = 2*ab + a;
        else if(s[i] == 'c')
        abc = 2*abc + ab;
    }
    return abc%max;
}


// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        cout<<fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends
