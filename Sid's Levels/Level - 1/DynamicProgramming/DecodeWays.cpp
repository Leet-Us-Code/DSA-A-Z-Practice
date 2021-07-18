//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int dp[n];
    dp[0] = 1; // first element will be one as there is only one decoding for single letter string 
    for(int i = 1; i < n; i++)
    {
        //edge case 1 -> when two zeroes are occuring together 
        if(s[i] == '0' && s[i-1] == '0')
        {
            dp[i] = 0;
        }
        //edge case 2 -> non zero after zero 
        else if(s[i-1] == '0' && s[i] != '0')
        {
            dp[i] = dp[i-1];
        }
        //edge case 3 -> zero after non zero 
        else if(s[i-1] != '0' && s[i] == '0')
        {
            //what if current index is 1 then it will give index out of bounds 
            //so we take care of that condition 
            if(s[i-1] == '1' || s[i-1] == '2')//if it's greater than 26 then no use 
            {
                if(i > 1)
                {
                    dp[i] = dp[i-2];
                }
                else
                {
                    dp[i] = 1;
                }
            }
            else 
            {
                dp[i] = 0;
            }
        }
        //normal cases 
        else 
        {
            //check if the last two are lesser than 26 or not 
            if(stoi(s.substr(i-1,2)) <= 26)
            {
                if(i > 1)
                {
                    dp[i] = dp[i-1] + dp[i-2];
                }
                else 
                {
                    dp[i] = dp[i-1] + 1;
                }
            }
            else
            {
                dp[i] = dp[i-1];
            }
        }
    }
    cout << dp[s.length()-1]<<endl;
}
