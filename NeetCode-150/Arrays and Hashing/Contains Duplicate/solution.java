// Sid's solution
class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>(); 

        for(int i = 0; i < nums.length; i++){
            if(mp.get(nums[i]) == null){
                mp.put(nums[i], 1);
            }
            else{
                mp.put(nums[i], mp.get(nums[i]) + 1);
            }
        }

        for(int i = 0; i < nums.length; i++){
            if(mp.get(nums[i]) > 1)
                return true;
        }
        return false;
    }
}
