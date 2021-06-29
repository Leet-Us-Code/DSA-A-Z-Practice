class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void merge(vector<int> &nums, int l, int mid, int r)
    {
        int rightSize = r - mid;
        int leftSize = mid - l + 1;
        int left[leftSize], right[rightSize];
        for(int i = 0; i < leftSize; i++)
        {
            left[i] = nums[i + l];
        }
        for(int i = 0; i < rightSize; i++)
        {
            right[i] = nums[i + mid + 1];
        }
        int i = 0, j = 0, k = l;
        while(i < leftSize && j < rightSize)
        {
            if(left[i] > right[j])
            {
                nums[k] = right[j];
                k++;
                j++;
            }
            else
            {
                nums[k] = left[i];
                k++;
                i++;
            }
        }
        while(i < leftSize)
        {
            nums[k] = left[i];
            k++;
            i++;
        }
        while(j < rightSize)
        {
            nums[k] = right[j];
            k++;
            j++;
        }
    }
    void mergeSort(vector<int> &nums, int l, int r)
    {
        if(r > l)
        {
            int mid = (r + l)/2;
            mergeSort(nums, l, mid);
            mergeSort(nums, mid+1, r);
            merge(nums, l, mid, r);
        }
        return;
    }
    vector<int> sortArray(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        mergeSort(nums, l, r);
        return nums;
    }
};
