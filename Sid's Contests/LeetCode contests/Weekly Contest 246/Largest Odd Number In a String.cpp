class Solution {
public:
    string largestOddNumber(string num) {
        int ind = -1;
        string res = "";
        for(int i = num.length() - 1; i >= 0; i--)
        {
            int x = (int)(num[i] - '0');
            if(x%2 != 0)
            {
                ind = i;
                break;
            }
        }
        if(ind == -1)
            return "";
        else
        {
            res = num.substr(0, ind+1);
            return res;
        }
    }
};
