class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void quickSort(int arr[], int low, int high)
    {
        if(low >= high)
        return;
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // code here
        int pivot = high;
        int i = low - 1, j = low;
        for(int j = low; j <= high; j++)
        {
            if(arr[j] < arr[pivot])
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[pivot]);
        return i+1;
    }
};
