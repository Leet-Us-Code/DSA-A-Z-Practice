class Solution {
public:
    bool detectCapitalUse(string word) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int flag2 = 0, flag1 = 0, flag = 0;
        if(isupper(word[0]))
        {
            int n = word.length();
            //for cases like USA
            for(int i = 1; i < n; i++)
            {
                if(islower(word[i]))
                {
                    flag = 1;
                    break;
                }
            }
            //for cases like Leetcode 
            for(int i = 1; i < n; i++)
            {
                if(isupper(word[i]))
                {
                    flag1 = 1;
                    break;
                }
            }
        }
        else 
        {
            for(int i = 0; i < word.length(); i++)
            {
                if(isupper(word[i]))
                {
                    flag2= 1;
                    break;
                }
            }
        }
        if((flag1 == 0 || flag == 0) && flag2 == 0)
            return true;
        return false;
    }
};
