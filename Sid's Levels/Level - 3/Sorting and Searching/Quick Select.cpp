class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int partition(vector<int> &nums, int s, int e)
    {
        int pivot = nums[e];
        int i = s-1;
        for(int j = s; j < e; j++)
        {
            if(nums[j] < pivot)
            {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[e]);
        return i+1;
    }
    int helper(vector<int> &nums, int s, int e, int k)
    {
        int p = partition(nums, s, e);
        if(p == k)
        {
            return nums[p];
        }
        else if(p < k)
        {
            return helper(nums, p+1, e, k);
        }
        else
            return helper(nums, s, p-1, k);
    }
    int findKthLargest(vector<int>& nums, int k) {
        return helper(nums, 0, nums.size()-1, nums.size()-k);
    }
};
