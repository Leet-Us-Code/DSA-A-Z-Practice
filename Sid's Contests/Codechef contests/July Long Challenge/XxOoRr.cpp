//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void fill(int n, int freq[])
{
    int i = 0;
    int x = n;
    while(x != 0)
    {
        int rem = x%2;
        freq[i] += rem;
        i++;
        x = x/2;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int freq[32] = {0};
        int arr[100000];
        for(int i = 0; i < n; i++)
        cin >> arr[i];
        for(int i = 0; i < n; i++)
        {
            fill(arr[i], freq);
        }
        int sum = 0;
        for(int i =  0; i < 32; i++)
        {
            if(freq[i]%k == 0)
            sum += (freq[i]/k);
            else
            sum += (freq[i]/k) + 1;
        }
        cout << sum << endl;
    }
}
