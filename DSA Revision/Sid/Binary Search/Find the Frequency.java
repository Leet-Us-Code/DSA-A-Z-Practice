//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Solution{
    int firstOccurrence(int[] a, int x)
    {
        int ind = -1; 
        int l = 0, r = a.length-1; 
        while(r >= l)
        {
            int mid = (r+l)/2; 
            if(a[mid] == x)
            {
                if(mid > 0 && a[mid] == a[mid-1])
                {
                    r = mid - 1;
                }
                else 
                {
                    return mid; 
                }
            }
            else if(a[mid] > x)
            r = mid - 1;
            else
            l = mid + 1;
        }
        return ind;
    }
    int lastOccurrence(int[] a, int x)
    {
        int ind = -1;
        int l = 0, r = a.length-1; 
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(a[mid] == x)
            {
                if(mid < a.length-1 && a[mid] == a[mid+1])
                {
                    l = mid + 1;
                }
                else
                {
                    return mid; 
                }
            }
            else if(a[mid] > x)
            r = mid - 1;
            else
            l = mid + 1;
        }
        return ind;
    }
    int findFrequency(int[] a, int x){
        Arrays.sort(a);
        int first = firstOccurrence(a, x);
        int last = lastOccurrence(a, x);
        
        if(first == -1 && last == -1)
        return 0;
        else 
        return last-first+1;
    }
}
