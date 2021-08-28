// Hari

int myAtoi(string str) {
        if (str.empty()) return 0;
        int i = 0, sign = 1;
        while (i + 1 < str.size() && isspace(str[i])) ++i;
        long res = 0;
        if (str[i] == '-') sign = 44 - str[i++];
        while (i < str.size()) {
            if (isdigit(str[i])) res = 10 * res + str[i++] - '0';
            else return res * sign;
            if (res > INT_MAX) return sign == -1 ? INT_MIN : INT_MAX;
        }
        return res * sign;
    }

//Sid 

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
