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
            int minInd = -1, min = INT_MAX;
            for(int i = ind+1; i < nums.size(); i++)
            {
                if(nums[i] > nums[ind])
                {
                    if(nums[i] < min)
                    {
                        min = nums[i];
                        minInd = i;
                    }
                }
            }
            swap(nums[ind], nums[minInd]);
            vector<int> ::iterator itr1 = nums.begin();
            advance(itr1, ind+1);
            sort(itr1, nums.end());
        }
    }
};
