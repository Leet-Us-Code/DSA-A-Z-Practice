//Naive (in terms of space) 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = nums.size();
        vector<int> left(n), right(n);
        int leftProd = 1, rightProd = 1;
        for(int i = 0; i < n; i++)
        {
            leftProd *= nums[i];
            left[i] = leftProd;
        }
        for(int i = n-1; i >= 0; i--)
        {
            rightProd *= nums[i];
            right[i] = rightProd;
        }
        vector<int> answer(n);
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                answer[i] = right[i+1];
            }
            else if(i == n-1)
            {
                answer[i] = left[i-1];
            }
            else 
            {
                answer[i] = left[i-1]*right[i+1];
            }
        }
        return answer;
    }
};
