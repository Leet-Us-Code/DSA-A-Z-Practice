// Sid 
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] res = new int[2];
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>(); 

        for(int i = 0; i < nums.length; i++){
            mp.put(nums[i], i); 
        }

        for(int i = 0; i < nums.length; i++){
            int tar = target - nums[i]; 
            if(mp.get(tar) != null && mp.get(tar) != i){
                res[0] = i; 
                res[1] = mp.get(tar); 
                break;
            }
        }

        return res;
    }
}
