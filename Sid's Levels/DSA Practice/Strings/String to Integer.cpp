class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int myAtoi(string s) {
        //eliminate whie spaces in the beginning 
        int n = s.length();
        int i = 0;
        while(i < n && s[i] == ' ')
            i++;
        //sign detection 
        s = s.substr(i);
        int sign = 1;
        if(s[0] == '-'){
            sign = -1; 
            s = s.substr(1);
        }
        else if(s[0] == '+')
        {
            sign = 1;
            s = s.substr(1);
        }
        // cout << s << endl;
        i = 0;
        for(i = 0; i < s.length(); i++)
        {
            if(isdigit(s[i]))
                continue;
            else
                break;
        }
        s = s.substr(0, i);
        int low = INT_MIN, high = INT_MAX;
        long long int sum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            sum = sum*10 + (s[i] - '0');
            if(sum*sign >= high)
                return high;
            else if(sum*sign <= low)
                return low;
        }
        if(sum*sign <= low)
            return low;
        else if(sum*sign >= high)
            return high ;
        else
            return sum*sign;
    }
};
