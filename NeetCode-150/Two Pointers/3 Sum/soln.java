class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        // JAI SHRI RAM 
        List<List<Integer>> res = new ArrayList<List<Integer>>(); 

        Arrays.sort(nums); 
        int n = nums.length; 

        for(int i = 0; i < n; i++){
            int l = i + 1; 
            int r = n - 1; 
            while(r > l){
                if(nums[l] + nums[r] == 0 - nums[i]){
                    
                    List<Integer> temp = new ArrayList<Integer>(); 
                    temp.add(nums[i]); 
                    temp.add(nums[l]); 
                    temp.add(nums[r]);
                    res.add(temp); 
                    while(l < n-1 && nums[l] == nums[l+1])
                        l++;
                    while(r > 0 && nums[r] == nums[r-1])
                        r--;
                    l++;
                    r--;
                    
                }
                else if(nums[l] + nums[r] > 0 - nums[i]){
                    r--;
                }
                else{
                    l++;
                }
            }
            while(i < n-1 && nums[i] == nums[i+1])
                i++;
            
        }
        return res;
    }
}
