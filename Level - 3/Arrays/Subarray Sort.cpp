class Solution {
public:
    bool isOutOfOrder(vector<int> a, int i)
    {
        if(i == 0)
        {
            if(a[i] > a[i+1])
                return true;
            else
                return false;
        }
        else if(i == a.size() - 1)
        {
            if(a[i] < a[i-1])
                return true;
            else
                return false;
        }
        else if(a[i] > a[i+1] || a[i] < a[i-1])
            return true;
        else
            return false;
    }
    int findUnsortedSubarray(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(nums.size() <= 1)
            return 0;
        int n = nums.size();
        int largest = INT_MIN, smallest = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(isOutOfOrder(nums, i))
            {
                largest = max(largest, nums[i]);
                smallest = min(smallest, nums[i]);
            }
        }
        if(largest == INT_MIN && smallest == INT_MAX)
            return 0;
        int left = 0, right = n-1;
        while(smallest >= nums[left])
        {
            left++;
        }
        while(largest <= nums[right])
            right--;
        
        int len = right - left + 1;
        return len;
    }
};
