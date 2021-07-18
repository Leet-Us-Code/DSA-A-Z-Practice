class Solution {
public:
    static bool comp(string s1, string s2)
    {
        string res1 = s1 + s2;
        string res2 = s2 + s1;
        return res1 > res2;
    }
    string largestNumber(vector<int>& nums) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<string> res;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            string s = to_string(nums[i]);
            res.push_back(s);
        }
        string str = "";
        sort(res.begin(), res.end(), comp);
        for(int i = 0; i < n; i++)
        {
            str += res[i];
        }
        if(str[0] == '0')
            return "0";
        return str;
    }
};
