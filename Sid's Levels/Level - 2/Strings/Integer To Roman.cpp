class Solution {
public:
    bool isPowerOfTen(int num)
    {
        int x = (int)(log10(num));
        double y = (log10(num));
        if(x - y == 0)
            return true;
        else
            return false;
    }
    string intToRoman(int num) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        string s;
        vector<pair<string, int>> mp;
        mp.push_back({"I", 1});
        mp.push_back({"IV", 4});
        mp.push_back({"V", 5});
        mp.push_back({"IX",9});
        mp.push_back({"X", 10});
        mp.push_back({"XL",40});
        mp.push_back({"L", 50});
        mp.push_back({"XC", 90});
        mp.push_back({"C", 100});
        mp.push_back({"CD", 400});
        mp.push_back({"D", 500});
        mp.push_back({"CM",900});
        mp.push_back({"M", 1000});
        while(num > 0)
        {
            int x;
            for(int i = 0; i < mp.size(); i++)
            {
                if(mp[i].second <= num)
                {
                    x = i;
                }
            }
            s += mp[x].first;
            num = num - mp[x].second;
            
        }
        return s;
    }
};
