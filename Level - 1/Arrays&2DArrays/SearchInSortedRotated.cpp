class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int findPivot(vector<int> a)
    {
        int l = 0; 
        int r = a.size() - 1;
        int pivot = 0;
        while(r >= l)
        {
            int mid = (l + r)/2;
            if(mid == 0 && a[mid] < a[mid+1])
            {
                pivot = mid;
                break;
            }
            else if(mid == a.size()-1 && a[mid] < a[mid-1])
            {
                pivot = mid;
                break;
            }
            else if(mid != 0 && mid != a.size()-1 &&a[mid] < a[mid-1] && a[mid] < a[mid+1])
            {
                pivot = mid;
                break;
            }
            else if(a[mid] < a[a.size()-1])
            {
                r = mid - 1;
            }
            else if(a[mid] > a[a.size()-1])
            {
                l = mid + 1;
            }
        }
        return pivot;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        if(nums.size() == 1 && nums[0] != target)
            return -1;
        if(nums.size() == 1 && nums[0] == target)
            return 0;
        int pivotInd;
        pivotInd = findPivot(nums);
        int l1 = 0;
        int r1 = pivotInd - 1;
        int l2 = pivotInd;
        int r2 = nums.size() - 1;
        int res = -1;
        if(pivotInd == -1)
            return -1;
        while(r1 >= l1)
        {
            int mid = (l1 + r1)/2;
            if(nums[mid] == target)
            {
                res = mid;
                break;
            }
            else if(nums[mid] > target)
            {
                r1 = mid - 1;
            }
            else if(nums[mid] < target)
            {
                l1 = mid + 1;
            }
        }
        while(r2 >= l2)
        {
            int mid = (l2 + r2)/2;
            if(nums[mid] == target)
            {
                res = mid;
                break;
            }
            else if(nums[mid] > target)
            {
                r2 = mid - 1;
            }
            else if(nums[mid] < target)
            {
                l2 = mid + 1;
            }
        }
        return res;
    }
};
