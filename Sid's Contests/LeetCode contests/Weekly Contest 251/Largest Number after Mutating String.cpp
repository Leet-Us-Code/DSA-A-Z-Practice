class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string maximumNumber(string num, vector<int>& change) {
        int ind = 0;
        int n = num.length();
        while(ind < n && (int)(num[ind] - '0') >= change[num[ind] - '0'])
        {
            ind++;
        }
        for(int i = ind; i < n; i++)
        {
            int cur = (int)(num[i] - '0');
            if(cur <= change[cur])
                num[i] = (char)(change[cur] + '0');
            else
                break;
        }
        return num;
    }
};
