class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int compress(vector<char>& chars) {
        int n = chars.size();
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            int cntr = 1;
            while(i < n-1 && chars[i] == chars[i+1])
            {
                cntr++;
                i++;
            }
            if(cntr == 1)
                chars[j++] = chars[i];
            else
            {
                chars[j++] = chars[i];
                for(char ch : to_string(cntr))
                    chars[j++] = ch;
            }
        }
        return j;
    }
};
