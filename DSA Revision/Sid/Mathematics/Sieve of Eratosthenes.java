class Solution{
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    static ArrayList<Integer> sieveOfEratosthenes(int n){
        // code here
        boolean[] arr = new boolean[n+1];
        for(int i = 0; i <= n; i++)
        {
            arr[i] = false;
        }
        ArrayList<Integer> res = new ArrayList<Integer>();
        for(int i = 2; i*i <= n; i++)
        {
            if(arr[i] == false)
            {
                for(int j = i*i; j <= n; j+=i)
                {
                    arr[j] = true;
                }
            }
        }
        for(int i = 2; i <= n; i++)
        {
            if(arr[i] == false)
            res.add(i);
        }
        return res;
    }
}
