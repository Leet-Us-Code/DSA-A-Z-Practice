class Solution {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    public int findPivot(int[] nums)
    {
        int n = nums.length; 
        int l = 0, r = n-1;
        int ans = -1; 
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(nums[mid] > nums[n-1])
                l++;
            else 
            {
                ans = mid;
                r--;
            }
        }
        return ans;
    }
    public int searchHelper(int[] nums, int l, int r, int tar)
    {
        int ans = -1; 
        while(r >= l)
        {
            int mid = (r + l)/2;
            if(nums[mid] == tar)
            {
                ans = mid;
                break;
            }
            else if(nums[mid] > tar)
            {
                r--;
            }
            else
                l++;
        }
        return ans;
    }
    public int max(int x, int y)
    {
        if(x > y)
            return x;
        return y;
    }
    public int search(int[] nums, int target) {
        int piv = findPivot(nums);
        int n = nums.length;
        int part1 = searchHelper(nums, 0, piv-1, target);
        int part2 = searchHelper(nums, piv, n-1, target);
        return max(part1, part2);
    }
}
