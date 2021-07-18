class Solution {
public:
    string getPermutation(int n, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int factorial = 1;
        vector<int> num; 
        for(int i = 1; i < n; i++)
        {
            factorial = factorial*i;
            num.push_back(i);
        }
        string ans;
        num.push_back(n);
        k = k - 1;
        while(true)
        {
            ans = ans + to_string(num[k/factorial]);
            num.erase(num.begin() + k/factorial);
            if(num.size() == 0)
                break;
            k = k%factorial;
            factorial = factorial/num.size();
        }
        return ans;
    }
};
