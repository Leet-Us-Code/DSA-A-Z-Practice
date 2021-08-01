class Solution{   
public:
//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        sort(arr, arr+n);
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            while(i < n-1 && arr[i] == arr[i+1])
            i++;
            a.push_back(arr[i]);
        }
        int cntr = 0;
        int l = 0, r = a.size() - 1;
        while(r >= l)
        {
            if(a[l] + a[r] == k)
            {
                if(a[l] == a[r])
                {
                    cntr += (mp[a[l]]*(mp[a[l]] - 1))/2;
                }
                else 
                {
                    cntr += mp[a[l]]*mp[a[r]];
                }
                l++;
                r--;
            }
            else if(a[l] + a[r] > k)
            r--;
            else
            l++;
        }
        return cntr;
    }
};
