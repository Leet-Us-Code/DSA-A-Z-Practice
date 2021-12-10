class Solution {
    public int lengthOfLIS(int[] nums) {
        int n = nums.length; 
        int[] lis = new int[n];
        Arrays.fill(lis, 1);
        for(int i = 1; i < n; i++)
        {
            lis[i] = 1; 
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i])
                    lis[i] = Math.max(lis[i], lis[j]+1);
            }
        }
        int maxEle = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++)
        {
            maxEle = Math.max(maxEle, lis[i]);
        }
        return maxEle;
    }
}
