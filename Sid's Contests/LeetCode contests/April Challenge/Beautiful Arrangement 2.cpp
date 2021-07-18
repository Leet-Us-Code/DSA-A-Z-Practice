class Solution {
public:
    vector<int> constructArray(int n, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int left = 1, right = n;
        vector<int> r;
        while(left <= right)
        {
            if(k > 1)
            {
                if(k%2 == 0)
                {
                    r.push_back(right);
                    right--;
                }
                else
                {
                    r.push_back(left);
                    left++;
                }
                k--;
            }
            else
            {
                r.push_back(left);
                left++;
            }
        }
        return r;
    }
};
