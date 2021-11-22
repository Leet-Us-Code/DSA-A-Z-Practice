class Solution
{
  //OM GAN GANAPATHAYE NAMO NAMAH 
  //JAI SHRI RAM 
  //JAI BAJRANGBALI 
  //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
  //Function to sort the array using insertion sort algorithm.
  public void insertionSort(int arr[], int n)
  {
      //code here
      for(int i = 1; i < n; i++)
      {
          int key = arr[i];
          int pred = i - 1;
          while(pred >= 0 && arr[pred] > key)
          {
              arr[pred+1] = arr[pred];
              pred--;
          }
          arr[pred+1] = key;
      }
  }
}
