class Solution {
public:
    string breakPalindrome(string palindrome) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = palindrome.length();
        if(n == 1)
            return "";
        else if(palindrome[0] == 'a')
        {
            bool flag = false;
            for(int i = 0; i < n/2; i++)
            {
                if(palindrome[i] != 'a')
                {
                    flag = true;
                    palindrome[i] = 'a';
                    break;
                }
            }
            if(flag == false)
            {
                palindrome[n-1] = 'b';
            }
            return palindrome;
        }
        else 
        {
            palindrome[0] = 'a';
            return palindrome;
        }
    }
};
