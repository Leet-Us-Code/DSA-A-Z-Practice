// sid 
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length; 
        int[] prod1 = new int[n+1];
        int[] prod2 = new int[n+1]; 

        prod1[0] = 1; 
        prod2[n] = 1; 

        for(int i = 1; i < n+1; i++){
            prod1[i] = prod1[i-1]*nums[i-1]; 
        }
        for(int i = n-1; i >= 0; i--){
            prod2[i] = prod2[i+1]*nums[i]; 
        }

        for(int i = 0; i < n; i++){
            nums[i] = prod1[i]*prod2[i+1];
        }
        return nums;
    }
}
