#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> x;
    for(int i = 0; i < s.length(); i++)
    {
        string temp;
        while(i < s.length() && s[i] != ' ')
        {
            temp.push_back(s[i]);
            i++;
        }
        x.push_back(temp);
    }
    for(int i = 0; i < x.size(); i++)
    {
        cout << x[i].size() << " ";
    }
}
