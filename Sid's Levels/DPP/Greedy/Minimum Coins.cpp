//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
int findClosest(int a[], int tar)
{
    //find the smallest closest index to tar
    int l = 0, r = 8;
    int ans = -1;
    while(r >= l)
    {
        int mid = (r + l)/2;
        if(a[mid] <= tar)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
int minimumCoins(int p)
{
    // write your code 
    int a[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int x = p;
    int coins = 0;
    while(x != 0)
    {
        int ind = findClosest(a, x);
        coins += x/a[ind];
        x = x%a[ind];
    }
    return coins;
}
