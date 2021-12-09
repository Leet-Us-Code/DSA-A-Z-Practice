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

// Hari

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> a = new HashSet<Integer>();
        int N = nums.length;
        
        for(int it: nums){
            if(a.contains(it)) return true;
            else {
                a.add(it);
            }
        }
        
        return false;
    }
}
