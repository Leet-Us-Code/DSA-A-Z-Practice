class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BAHDRE NARAYANA
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i = 0; i < n; i++)
       {
           int minInd = i, minEle = arr[i];
           for(int j = i; j < n; j++)
           {
               if(minEle > arr[j])
               {
                   minEle = arr[j];
                   minInd = j;
               }
           }
           swap(arr[minInd], arr[i]);
       }
    }
};
