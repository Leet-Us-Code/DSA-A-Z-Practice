class Solution {
public:
    void permutation(vector<string> &set, string s, int l, int r)
    {
        if(l == r)
        {
            set.push_back(s);
        }
        for(int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permutation(set, s, l+1, r);
            swap(s[l], s[i]);
        }
    }
    string getPermutation(int n, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        string s;
        for(int i = 1; i <= n; i++)
        {
            char ch = (char)(i + '0');
            s.push_back(ch);
        }
        //return s;
        vector<string> set;
        permutation(set, s, 0, n-1);
        sort(set.begin(), set.end());
        return set[k-1];
    }
};
