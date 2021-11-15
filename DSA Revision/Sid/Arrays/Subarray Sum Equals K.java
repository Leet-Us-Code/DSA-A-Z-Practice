class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public int subarraySum(int[] nums, int k) {
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
        int n = nums.length; 
        int cnt = 0;
        //make the cumulative array 
        int[] arr = new int[n+1];
        arr[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            arr[i] = arr[i-1] + nums[i-1];
        }
        for(int i = 0; i <= n; i++)
        {
            int tar = arr[i] - k;
            //check if tar was already covered till now 
            if(mp.get(tar) != null)
            {
                cnt += mp.get(tar);
            }
            Integer var = mp.get(arr[i]);
            mp.put(arr[i], (var == null)? 1: var+1);
        }
        return cnt;
    }
}
