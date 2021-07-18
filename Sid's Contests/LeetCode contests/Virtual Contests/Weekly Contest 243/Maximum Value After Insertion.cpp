class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string maxValue(string n, int x) {
        int flag = 0; //0 for pos and 1 for neg 
        if(n[0] == '-')
            flag = 1;
        char str[1000000];
        string res;
        char ch = (char)(x + '0');
        // cout << ch;
        if(flag == 0)
        {
            //positive case
            int ind = 0;
            int curNum = (int)(n[ind] - '0');
            while(ind < n.length() && x <= curNum)
            {
                str[ind] = n[ind];
                cout << str[ind] << " ";
                ind++;
                curNum = (int)(n[ind] - '0');
            }
            int ind2 = ind;
            str[ind] = ch;
            ind++;
            while(ind2 < n.length())
            {
                str[ind] = n[ind2];
                ind2++;
                ind++;
            }
            for(int i = 0; i < ind; i++)
                res.push_back(str[i]);
        }
        else
        {
            //negative case
            res.push_back('-');
            n = n.substr(1);
            int ind = 0;
            int curNum = (int)(n[ind] - '0');
            while(ind < n.length() && x >= curNum)
            {
                str[ind] = n[ind];
                ind++;
                curNum = (int)(n[ind] - '0');
            }
            int ind2 = ind;
            str[ind] = ch;
            ind++;
            while(ind2 < n.length())
            {
                str[ind] = n[ind2];
                ind2++;
                ind++;
            }
            for(int i = 0; i < ind; i++)
                res.push_back(str[i]);
        }
        return res;
    }
};
