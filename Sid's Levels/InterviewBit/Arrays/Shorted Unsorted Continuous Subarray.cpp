class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
    bool oddIndex(vector<int> nums, int i)
    {
        int n = nums.size();
        if(i == 0)
        {
            if(nums[i] > nums[i+1])
                return true;
            return false;
        }
        else if(i == n-1)
        {
            if(nums[i] < nums[i-1])
                return true;
            return false;
        }
        else 
        {
            if(nums[i] > nums[i+1] || nums[i] < nums[i-1])
                return true;
            return false;
        }
    }
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)
            return 0;
        int largest = INT_MIN, smallest = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(oddIndex(nums, i))
            {
                largest = max(largest, nums[i]);
                smallest = min(smallest, nums[i]);
            }
        }
        int len = 0;
        if(largest == INT_MIN || smallest == INT_MAX)
            return 0;
        int l = 0, r = n-1;
        while(smallest >= nums[l])
        {
            l++;
        }
        while(largest <= nums[r])
        {
            r--;
        }
        return r - l +1;
    }
};
