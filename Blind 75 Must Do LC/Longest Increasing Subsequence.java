// Sid

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

// Hari - both front to back and back to front

class Solution {
    public int lengthOfLIS(int[] nums) {
        int N = nums.length;
        int res = 1;
        int[] LIS = new int[N];
        Arrays.fill(LIS, 1);
        
        
        // back to front
        /*
        for(int i = N-2; i>=0; i--){
            for(int j = i+1; j<N; j++){
                if(nums[i] < nums[j]){
                    LIS[i] = Math.max(LIS[i], 1 + LIS[j]);
                    res = Math.max(res, LIS[i]);
                }
            }
        }
        */
        
        // front to back
        for(int i = 0; i<N-1; i++){
            for(int j = i+1; j<N; j++){
                if(nums[i] < nums[j]){
                    LIS[j] = Math.max(LIS[j], 1 + LIS[i]);
                    res = Math.max(res, LIS[j]);
                }
            }
        }
        
        return res;
    }
}
