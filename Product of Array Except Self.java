//Sid
class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] prefix = new int[n+1];
        int[] suffix = new int[n+1];
        prefix[0] = 1; 
        suffix[n] = 1;
        for(int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int i = n-1; i >= 0; i--)
        {
            suffix[i] = suffix[i+1]*nums[i];
        }
        int[] res = new int[n];
        for(int i = 0; i < n; i++)
        {
            res[i] = prefix[i]*suffix[i+1];
        }
        return res;
    }
}
