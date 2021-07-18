#include <bits/stdc++.h>
using namespace std;

int solution(int N)
{
    int ans = ((N - 1) * (N - 2)) / 2;
    // we have all psbl ans. Now find out wrong ways and remove them

    // when all get same amount
    if (N % 3 == 0)
        ans--;

    // when 2 ppl get more than the third
    //trav thru the no of possible candies each person can get
    for (int i = 1; i <= N; i++)
    {
        // we assume the 2 ppl get same i candies
        int third = N - (2 * i);

        if (third > 0 && third < i)
        {
            // 3 psbl cases so subtract em all
            ans -= 3;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int x = solution(n);
    cout << x << endl;
}