//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
char key[] = {'\0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void printEncodings(string s, string res)
{
    if(s.length() == 0)
    return;
    else if(s.length() == 1)
    {
        if(s[0] == '0')
        return;
        else
        {
            int c = s[0] - '0';
            res.push_back(key[c]);
            cout << res << endl;
            return;
        }
    }
    else if(s.length() == 2)
    {
        string s1;
        s1 = s;
        if(s[0] == '0')
        return;
        else
        {
            int c = s[0] - '0';
            res.push_back(key[c]);
            string s2;
            s2 = s.substr(1,s.length()-1);
            printEncodings(s2,res);
            res.pop_back();//otherwise res will be affected for the next if statement
        }
        int x;
        x = stoi(s1);
        if(x <= 26)
        {
            res.push_back(key[x]);
            string s3;
            s3 = s.substr(2,s.length()-2);
            cout << res << endl;
            return;
        }
        else
        {
            return;
        }
    }
    else
    {
        string s1;
        s1 = s.substr(0,2);
        if(s[0] == '0')
        return;
        else
        {
            int c = s[0] - '0';
            res.push_back(key[c]);
            string s2;
            s2 = s.substr(1,s.length()-1);
            printEncodings(s2,res);
            res.pop_back();
        }
        int x;
        x = stoi(s1);
        if(x <= 26)
        {
            res.push_back(key[x]);
            string s3;
            s3 = s.substr(2,s.length()-2);
            printEncodings(s3,res);
            res.pop_back();
        }
        else
        {
            return;
        }
    }
}
int main()
{
    string str, res="";
    cin >> str;
    printEncodings(str,res);
}
