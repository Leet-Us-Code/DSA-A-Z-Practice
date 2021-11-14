class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    void sortColors(vector<int>& a) {
        int n = a.size();
        int l = 0, mid = 0, high = n-1;
        while(mid <= high)
        {
            if(a[mid] == 0)
            {
                swap(a[mid], a[l]);
                l++;
                mid++;
            }
            else if(a[mid] == 1)
            {
                mid++;
            }
            else 
            {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};
