// Hari

class Solution {
    public int[] productExceptSelf(int[] nums) {
        int N = nums.length;
        int[] prefix = new int[N+1];
        int[] suffix = new int[N+1];
        
        prefix[0] = 1; suffix[N] = 1;
        // left to right
        for(int i = 1; i<=N; i++){
            prefix[i] = prefix[i-1]*nums[i-1];
            // 1 1 2 6 24
        }
        
        // right to left
        for(int i = N-1; i>=0; i--){
            suffix[i] = suffix[i+1]*nums[i];
        }
        
        // final res
        int[] res = new int[N];
        for(int i = 0; i<N; i++){
            res[i] = prefix[i]*suffix[i+1];
        }
        return res;
    }
}

