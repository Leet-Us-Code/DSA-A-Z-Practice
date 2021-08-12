class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    static bool comp(Item a, Item b)
    {
        double x1 = (double)((double)a.value/(double)a.weight);
        double x2 = (double)((double)b.value/(double)b.weight);
        return x1 > x2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr + n, comp);
        int sum = 0;
        double value = 0;
        for(int i = 0; i < n; i++)
        {
            if(sum + arr[i].weight <= W)
            {
                sum += arr[i].weight;
                value += arr[i].value;
            }
            else 
            {
                int rem = W - sum;
                value += arr[i].value*((double)rem/(double)arr[i].weight);
                break;
            }
        }
        return value;
    }
        
};
