class Solution {
public:
    bool isNumber(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int i = 0; 
        while(i < s.length() && s[i] == ' ')
            i++;
        if(s[i] == '+' || s[i] == '-') 
            i++;
        int numPoint = 0; // number of points 
        int numDigit = 0; // number of digiits 
        for(; i < s.length(); i++)
        {
            if((s[i] >= '0' && s[i] <= '9') || s[i] == '.')
            {
                if(s[i] == '.')
                {
                    numPoint++;
                }
                else 
                {
                    numDigit++;
                }
            }
            else
                break;
        }
        //if more than one point or less than 1 digit return false
        if(numPoint > 1 || numDigit < 1)
            return false;
        if(s[i] == 'e' || s[i] == 'E')
        {
            i++;
            if(s[i] == '+' || s[i] == '-')
            {
                i++;
            }
            int cntr = 0;
            for(; i < s.length(); i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                {
                    cntr++;
                }
                else
                    break;
            }
            if(cntr < 1)
                return false;
            
        }
        while(i < s.length() && s[i] == ' ')
            i++;
        //only if it reaches the end of the string...in the case of 99e2.5 it breaks in the point and does not go till the end of the string -> awesome logic
        if(s[i] == 0)
            return true;
        else
            return false;
    }
};
