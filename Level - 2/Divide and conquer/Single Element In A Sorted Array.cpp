class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(a.size() == 1)
            return a[0];
        int l = 0;
        int r = a.size() - 1;
        int res = -1;
        while(r >= l)
        {
            int mid = (l + r)/2;
            if(mid%2 == 0)
            {
                if(a[mid] == a[mid+1])
                {
                    res = l;
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
            else
            {
                if(a[mid] == a[mid-1])
                {
                    l = mid + 1;
                }
                else
                    r = mid-1;
            }
        }
        return a[l];
    }
};
