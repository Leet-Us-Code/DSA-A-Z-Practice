// O(nlogn) -> sorting 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr, arr + r + 1);
        return arr[k-1];
    }
};

//O(n) -> Quick Select 
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int partition(int nums[], int s, int e)
    {
        int pivot = nums[e];
        int i = s-1;
        for(int j = s; j < e; j++)
        {
            if(nums[j] < pivot)
            {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[e]);
        return i+1;
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int p = partition(arr, l, r);
        if(p == k)
        return arr[p];
        else if(p > k)
        return kthSmallest(arr, l, p-1, k);
        else 
        return kthSmallest(arr, p+1, r, k);
    }
};
