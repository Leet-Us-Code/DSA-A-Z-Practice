class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int partition(vector<int> &nums, int s, int e)
    {
        //we take the last element as the pivot 
        int pivot = nums[e];
        int i = s-1; // we take i as -1 usually (in notes )
        for(int j = s; j < e; j++)
        {
            if(nums[j] < pivot)
            {
                //we place in the first window else just keep on expanding the window 
                i++;
                swap(nums[i], nums[j]);
            }
        }
        //make the pivot come to its correct posn 
        swap(nums[i+1], nums[e]);
        return i+1; // return the pivot posn
    }
    void quickSort(vector<int> &nums, int s, int e)
    {
        if(s >= e)
        {
            //in case if array has only 1 element or 0 element 
            return;
        }
        else 
        {
            int p = partition(nums, s, e); // returns the correct position of the pivot element  
            quickSort(nums, s, p-1);
            quickSort(nums, p+1, e);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums, 0, n-1);
        return nums;
    }
};
