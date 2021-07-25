class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void convert(string s, vector<int> &a)
    {
        for(int i = 0; i < s.length(); i++)
        {
            int ch = (char)(s[i] - 'a');
            ch++;
            a.push_back(ch);
        }
    }
    int sumDigits(int x)
    {
        int sum = 0;
        while(x)
        {
            sum += x%10;
            x = x/10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        vector<int> a;
        convert(s, a);
        // for(int i = 0; i < a.size(); i++)
        //     cout << a[i] << " ";
        int sum = 0;
        for(int i = 0; i < a.size(); i++)
        {
            int x = sumDigits(a[i]);
            sum += x;
        }
        k--;
        while(k != 0)
        {
            sum = sumDigits(sum);
            k--;
        }
        return sum;
    }
};
