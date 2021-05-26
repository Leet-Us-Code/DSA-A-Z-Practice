class Solution {
public:
    int minPartitions(string s) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int n = s.length();
        sort(s.begin(), s.end());
        int max = s[0] - '0';
        int sum = s[0] - '0';
        for(int i = 1; i < n; i++)
        {
            max = s[i] - '0';
            sum += (max - sum);
        }
        return sum;
    }
};
