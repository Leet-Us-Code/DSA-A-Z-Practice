//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;\
//DP approach for fibonacci series 
int FibMemoized(int n, int qb[])
{
    if(n == 0 || n == 1)
    return n;
    //if already the problem is solved dont solve it again 
    //look into the question bank 
    if(qb[n] != 0)
    return qb[n];
    else
    {
        int fib1 = FibMemoized(n-1,qb);
        int fib2 = FibMemoized(n-2,qb);
        //store the new answer 
        qb[n] = fib1 + fib2;
        return fib1 + fib2;
    }
}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        int x;
        int qb[n+1] = {0}; // question bank to store the answers so that repetetive calculation is removed
        x = FibMemoized(n,qb);
        cout << x << endl;
    }
}
