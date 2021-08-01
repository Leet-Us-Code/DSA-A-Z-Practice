//Function to sort the array using insertion sort algorithm.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i = 1; i < n; i++)
        {
            int cur = arr[i]; // current element 
            int j = i - 1; // predecessor
            while(j >= 0 && cur < arr[j])
            {
                //keep on moving until cur > predecessor 
                //r8 now if cur < arr[j] -> arr[j] has to be moved one step ahead 
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = cur;
        }
    }
