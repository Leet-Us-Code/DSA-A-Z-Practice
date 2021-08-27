// Hari

void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(), nums.end()); -> using inbuilt (slow)
        
        // fast
        ios_base::sync_with_stdio(false);
        // first traverse from back and see which element is smaller than its next element
        int N = nums.size();
        int l = 0, r = 0;
        for(l = N-2; l>=0; l--){
            if(nums[l] < nums[l+1]) break;
        }
        // if nums is strictly desc -> its next permutation will be the asc sequence
        if(l < 0) sort(nums.begin(), nums.end()); 
        else {
            // find the first ind from right which is > nums[l]. this number will replace nums[l]
            // as we want the next permutation (just a bit greater than curr nums)
            for(r = N-1; r>l; r--){
                if(nums[r] > nums[l]) break;
            }

            // now swap l and r
            swap(nums[l], nums[r]);

          // now all elements after "l" th pos will be in desc. order -> reverse them to make it asc.
        // that will give us the exact next permutation

            reverse(nums.begin() + l + 1, nums.end());
        }
        
    }

//Sid 

class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void reverseSub(vector<int> &nums, int l, int r)
    {
        int n = r - l + 1;
        for(int i = 0; i < n/2; i++)
        {
            swap(nums[l+i], nums[l+(n-1-i)]);
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i;
        for(i = n-1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
                break;
        }
        if(i == 0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int ind = i - 1;
        int minInd = -1, minEle = INT_MAX;
        for(int i = ind+1; i < n; i++)
        {
            if(nums[i] > nums[ind])
            {
                if(minEle >= nums[i])
                {
                    minEle = nums[i];
                    minInd = i;
                }
            }
        }
        swap(nums[ind], nums[minInd]);
        reverseSub(nums, ind+1, n-1);
    }
};
