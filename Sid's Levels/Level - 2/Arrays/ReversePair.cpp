class Solution {
public:
    int merge(vector<int> &nums, int l, int mid, int r)
    {
        int cnt = 0;
        int i = l;
        int j = mid + 1;
        while(i <= mid && j <= r)
        {
            if((long)nums[i] > 2*(long)nums[j])
            {
                cnt += (mid + 1 - i);
                j++;
            }
            else
            {
                i++;
            }
        }
        sort(nums.begin() + l, nums.begin() + r + 1);
        return cnt;
    }
    int countPairs(vector<int> &nums, int l, int r)
    {
        int c = 0;
        if(l < r)
        {
            int mid = (l + r)/2;
            c += countPairs(nums, l, mid);
            c += countPairs(nums, mid+1, r);
            c += merge(nums, l, mid, r);
        }
        return c;
    }
    int reversePairs(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        return countPairs(nums, 0, nums.size() - 1);
    }
};
