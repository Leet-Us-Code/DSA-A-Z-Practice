class Solution
{
    public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int n1 = mid - l + 1;
         int n2 = r - mid;
         int left[n1], right[n2];
         for(int i = 0; i < n1; i++)
         left[i] = arr[l + i];
         for(int i = 0; i < n2; i++)
         right[i] = arr[mid + 1 + i];
         int k = l;
         int i = 0, j = 0;
         while(i < n1 && j < n2)
         {
             if(left[i] > right[j])
             {
                 arr[k++] = right[j++];
             }
             else
             {
                 arr[k++] = left[i++];
             }
         }
         while(i < n1)
         {
             arr[k++] = left[i++];
         }
         while(j < n2)
         {
             arr[k++] = right[j++];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        
        if(l < r)
        {
            int mid = (l + r)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
    }
};
