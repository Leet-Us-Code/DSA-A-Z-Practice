class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i = 0; i < n-1; i++)
        {
            for(int j = 0; j < n-1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
};
