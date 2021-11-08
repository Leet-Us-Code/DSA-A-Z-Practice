#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        vector<bool> sieve(b+1, false);
        for(int i = 2; i*i <= b; i++)
        {
            if(sieve[i] == false)
            {
                for(int j = i*i; j <= b; j+=i)
                {
                    sieve[j] = true;
                }
            }
        }
        int cntr = 0;
        a = max(a, 2);
        for(int i = a; i <= b; i++)
        {
            if(sieve[i] == false)
                cntr++;
        }
        cout << cntr << endl;
    }
}
