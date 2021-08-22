class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    string convert(int x, int n)
    {
        string s;
        int y = x;
        while(y)
        {
            char ch = (char)((y%2) + '0');
            s.push_back(ch);
            y = y/2;
        }
        if(s.length() != n)
        {
            for(int i = 0; i < s.length()-n; i++)
                s.push_back('0');
        }
        reverse(s.begin(), s.end());
        return s;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        int r = pow(2, n);
        for(int i = 0; i < r; i++)
        {
            string res = convert(i, n);
            int flag = false;
            //cout << i << " " <<  res << endl;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == res)
                {
                    flag = true;
                    break;
                }
            }
            if(flag == false)
                return res;
        }
        return "";
    }
};
