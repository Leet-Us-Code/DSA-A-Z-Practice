class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAHRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int num1 = -1, num2 = -1;
        int c1 = 0, c2 = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == num1)
            {
                c1++;
            }
            else if(nums[i] == num2)
            {
                c2++;
            }
            else if(c1 == 0)
            {
                num1 = nums[i];
                c1 = 1;
            }
            else if(c2 == 0)
            {
                num2 = nums[i];
                c2 = 1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == num1)
                cnt1++;
            else if(nums[i] == num2)
                cnt2++;
        }
        nums.clear();
        if(cnt1 > (n/3))
            nums.push_back(num1);
        if(cnt2 > (n/3))
            nums.push_back(num2);
        return nums;
    }
};
