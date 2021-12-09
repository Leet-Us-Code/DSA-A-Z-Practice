//Sid
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> s = new HashSet<Integer>();
        int n = nums.length;
        for(int i = 0; i < n;  i++)
        {
            if(s.contains(nums[i]))
                return true;
            s.add(nums[i]);
        }
        return false;
    }
}
