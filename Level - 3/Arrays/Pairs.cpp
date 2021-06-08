//refer notes 
class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        // code here
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        sort(a, a+n);
        vector<int> x;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int c = 1;
            while(i < n - 1 && a[i] == a[i+1])
            {
                c++;
                i++;
            }
            mp[a[i]] = c;
            x.push_back(a[i]);
        }
        int freq1 = 0, freq2 = 0;
        for(int i = 0; i < x.size(); i++)
        {
            if(k%2 == 0 && x[i] == k/2)
            {
                freq2 += ((mp[x[i]] * (mp[x[i]] - 1))/2);
            }
        }
        // for(int i = 0; i < x.size(); i++)
        // cout << x[i] << " ";
        // cout << endl;
        int l = 0, r = x.size() - 1;
        while(r > l)
        {
            if(x[r] + x[l] == k)
            {
                freq1 += mp[x[r]]*mp[x[l]];
                l++;
                r--;
            }
            else if(x[r] + x[l] > k)
            {
                r--;
            }
            else 
            {
                l++;
            }
        }
        return freq1 + freq2;
    }
};
