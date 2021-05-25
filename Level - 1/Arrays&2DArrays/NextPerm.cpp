class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //OM GAN GANAPAATHAAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        //traverse the array from reverse aand find where the decreasing pattern occurs 
        int ind = -1;
        for(int i = nums.size() - 1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                ind = i - 1;
                break;
            }
        }
        if(ind == -1)
        {
            sort(nums.begin(), nums.end());
        }
        else
        {
            int ind2;
            int min = 100000000;
            for(int i = ind+1; i < nums.size(); i++)
            {
                if(nums[i] > nums[ind])
                {
                    if(min >= nums[i])
                    {
                        min = nums[i];
                        ind2 = i;
                    }
                }
            }
            swap(nums[ind], nums[ind2]);
            auto it = nums.begin();
            advance(it,ind+1);
            reverse(it, nums.end());
        }
    }
};
