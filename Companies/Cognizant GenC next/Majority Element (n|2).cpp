// Based on moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int el = 0, cnt = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(cnt == 0)
            {
                el = nums[i];
            }
            if(el == nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        return el;
        
    }
};
