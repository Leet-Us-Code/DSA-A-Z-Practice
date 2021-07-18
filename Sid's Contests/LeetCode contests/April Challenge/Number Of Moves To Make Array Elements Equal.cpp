class Solution {
public:
    int minOperations(int n) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            a.push_back(2*i+1);
        }
        int median;
        if(n%2 == 0)
        {
            median = (a[n/2] + a[(n/2)-1])/2;
        }
        else
        {
            median = a[n/2];
        }
        int sum = 0;
        for(int i = 0; i < n/2; i++)
        {
            sum += (median - a[i]);
        }
        return sum;
    }
};
