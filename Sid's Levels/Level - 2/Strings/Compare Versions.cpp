class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        int n = version1.length();
        int m = version2.length();
        vector<string> v1, v2;
        string s;
        while(i < n)
        {
            if(version1[i] == '.')
            {
                v1.push_back(s);
                s.clear();
            }
            else 
            {
                s.push_back(version1[i]);
            }
            i++;
        }
        v1.push_back(s);
        s.clear();
        while(j < m)
        {
            if(version2[j] == '.')
            {
                v2.push_back(s);
                s.clear();
            }
            else 
            {
                s.push_back(version2[j]);
            }
            j++;
        }
        v2.push_back(s);
        s.clear();
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < v1.size() && ptr2 < v2.size())
        {
            int num1 = stoi(v1[ptr1]);
            int num2 = stoi(v2[ptr2]);
            if(num1 == num2)
            {
                ptr1++;
                ptr2++;
            }
            else if(num1 > num2)
                return 1;
            else
                return -1;
        }
        while(ptr1 < v1.size())
        {
            int num1 = stoi(v1[ptr1]);
            if(num1 > 0)
                return 1;
            ptr1++;
        }
        while(ptr2 < v2.size())
        {
            int num2 = stoi(v2[ptr2]);
            if(num2 > 0)
                return -1;
            ptr2++;
        }
        return 0;
    }
};
