class Solution
{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void sort012(int a[], int n)
    {
        // coode here 
        int l = 0, h = n-1, mid = 0;
        while(h >= mid)
        {
            if(a[mid] == 0)
            {
                swap(a[l], a[mid]);
                l++;
                mid++;
            }
            else if(a[mid] == 1)
            mid++;
            else 
            {
                swap(a[mid], a[h]);
                h--;
            }
        }
    }
    
};
