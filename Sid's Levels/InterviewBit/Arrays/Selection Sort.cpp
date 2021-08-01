//OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i = 0; i < n-1; i++)
       {
           int minInd = i;
           for(int j = i+1; j < n; j++)
           {
               if(arr[j] < arr[minInd])
               {
                   minInd = j;
               }
           }
           swap(arr[minInd], arr[i]);
       }
    }
