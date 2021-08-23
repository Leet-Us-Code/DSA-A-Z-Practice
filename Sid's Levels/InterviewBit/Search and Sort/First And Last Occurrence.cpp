//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
vector<int> find(int arr[], int n , int x )
{
    // code here
    int l = 0, r = n - 1;
    int first = -1, last = -1;
    while(r >= l)
    {
        int mid = (r + l)/2;
        if(arr[mid] == x)
        {
            last = mid;
            l = mid + 1;
        }
        else if(arr[mid] > x)
        {
            r = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
    }
    l = 0; 
    r = n - 1;
    while(r >= l)
    {
        int mid = (r + l)/2;
        if(arr[mid] == x)
        {
            first = mid;
            r = mid - 1;
        }
        else if(arr[mid] > x)
        {
            r = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
    }
    vector<int> res;
    res.push_back(first);
    res.push_back(last);
    return res;
}
