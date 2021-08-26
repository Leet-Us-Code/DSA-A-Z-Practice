class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
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
            int predInd = i - 1;
            int cur = arr[i];
            while(predInd >= 0 && arr[predInd] > cur)
            {
                arr[predInd+1] = arr[predInd];
                predInd--;
            }
            arr[predInd + 1] = cur;
        }
    }
};
